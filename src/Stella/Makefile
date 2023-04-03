CC=g++
CCFLAGS=-g -W -Wall

FLEX=flex
FLEX_OPTS=-PStella

BISON=bison
BISON_OPTS=-t -pStella

OBJS=Absyn.o Lexer.o Parser.o Printer.o

.PHONY : clean distclean

all : TestStella

clean :
	rm -f *.o TestStella Stella.aux Stella.log Stella.pdf Stella.dvi Stella.ps Stella

distclean : clean
	rm -f Absyn.C Absyn.H Test.C Parser.C Parser.H Lexer.C Skeleton.C Skeleton.H Printer.C Printer.H Makefile Stella.l Stella.y Stella.tex

TestStella : ${OBJS} Test.o
	@echo "Linking TestStella..."
	${CC} ${CCFLAGS} ${OBJS} Test.o -o TestStella

Absyn.o : Absyn.C Absyn.H
	${CC} ${CCFLAGS} -c Absyn.C

Lexer.C : Stella.l
	${FLEX} -oLexer.C Stella.l

Parser.C : Stella.y
	${BISON} Stella.y -o Parser.C

Lexer.o : Lexer.C Parser.H
	${CC} ${CCFLAGS} -c Lexer.C

Parser.o : Parser.C Absyn.H
	${CC} ${CCFLAGS} -c Parser.C

Printer.o : Printer.C Printer.H Absyn.H
	${CC} ${CCFLAGS} -c Printer.C

Skeleton.o : Skeleton.C Skeleton.H Absyn.H
	${CC} ${CCFLAGS} -Wno-unused-parameter -c Skeleton.C

Test.o : Test.C Parser.H Printer.H Absyn.H
	${CC} ${CCFLAGS} -c Test.C
