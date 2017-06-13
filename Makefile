NAME = nibbler
SRCD = "./src/"
SRCCLS = "./src/Classes"/
HEADD = "./include/"
HCLS = "./include/Classes/"
OUTD = "./"
FLAG = -Wall -Werror -Wextra

SRCS = $(SRCD)nibbler.cpp \
	   $(SRCCLS)Point.cpp $(SRCCLS)Size.cpp $(SRCCLS)Snake.cpp \
	   $(SRCCLS)GameLogic.cpp

TSTSRC = $(SRCD)Point.cpp $(SRCD)Size.cpp $(SRCD)Snake.cpp $(SRCD)GameLogic.cpp

all: $(NAME)

$(NAME):
#	Build Lib
	clang++ $(FLAG) -I$(HCLS) -I$(HEADD) $(SRCS) -o $(OUTD)nibbler

tst:
	clang++ -I$(HCLS) -I$(HEADD) tst.cpp $(TSTSRC) -o $(OUTD)nibbler

#clean:

fclean:
#	rm -f nibbler
	rm -f nibbler.exe

re: fclean all	