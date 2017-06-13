NAME = nibbler
SRCD = "./src/"
HEADD = "./include"
OUTD = "./"
FLAG = -Wall -Werror -Wextra

SRCS = $(SRCD)nibbler.cpp

all: $(NAME)

$(NAME):
#	Build Lib

tst:
	clang++ -I$(HEADD) $(SRCS) -o $(OUTD)nibbler