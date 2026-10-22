GRAMMAR = SimpleIR
PROGRAM = CodeGen
ANTLR_VERSION = $(shell dpkg --get-selections | grep antlr4 | grep runtime4 | egrep -o "([0-9]+\.[0-9]+)")
ANTLR = antlr-$(ANTLR_VERSION)-complete.jar
RUNTIME_INCLUDE = /usr/include/antlr4-runtime
RUNTIME_LIB = /usr/lib/x86_64-linux-gnu/libantlr4-runtime.so.$(ANTLR_VERSION)
GRAMMARSRC = $(GRAMMAR).g4
GRAMMARLEXER = $(GRAMMAR).interp $(GRAMMAR)Lexer.interp $(GRAMMAR)Lexer.tokens $(GRAMMAR).tokens
GRAMMARCPP = $(GRAMMAR)Lexer.cpp $(GRAMMAR)Parser.cpp $(GRAMMAR)BaseListener.cpp $(GRAMMAR)Listener.cpp
GRAMMARH = $(patsubst %.cpp, %.h, $(GRAMMARCPP))
SRC = $(GRAMMARCPP) $(PROGRAM).cpp
OBJ = $(patsubst %.cpp, %.o, $(SRC))

.PHONY: all parser clean clobber distclean package

all: $(PROGRAM)

$(PROGRAM): $(OBJ)
	$(CXX) -o $@ $^ $(RUNTIME_LIB)

%.o: %.cpp
	$(CXX) -I $(RUNTIME_INCLUDE) -c $<

$(ANTLR):
	wget https://www.antlr.org/download/$(ANTLR)

parser: $(GRAMMARSRC) $(ANTLR)
	CLASSPATH=$(ANTLR):$(CLASSPATH) java org.antlr.v4.Tool -Dlanguage=Cpp $<

clean:
	rm -f $(OBJ) $(PROGRAM)

clobber: clean
	rm -f $(GRAMMAR).interp $(GRAMMAR)Lexer.interp $(GRAMMAR)Lexer.tokens $(GRAMMAR).tokens
	rm -f $(GRAMMAR)Lexer.h $(GRAMMAR)Parser.h $(GRAMMAR)BaseListener.h $(GRAMMAR)Listener.h
	rm -f $(GRAMMAR)Lexer.cpp $(GRAMMAR)Parser.cpp $(GRAMMAR)BaseListener.cpp $(GRAMMAR)Listener.cpp
	rm -f $(GRAMMAR)Lexer.py $(GRAMMAR)Parser.py $(GRAMMAR)BaseListener.h $(GRAMMAR)Listener.py

distclean: clobber
	rm -f $(ANTLR)

package: parser
	tar -cvf ../../org/files/compiler-project.tar Makefile $(GRAMMARSRC) $(GRAMMARCPP) $(PROGRAM).template.cpp $(GRAMMARH) $(GRAMMARLEXER)
