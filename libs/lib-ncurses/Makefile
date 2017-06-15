NAME = libncurse.so
SRCD = "./src/"
HEADD = "./include/"
FLAG = -Wall -Werror -Wextra

SRCS = $(SRCD)LibNCurse.cpp

all: $(NAME)

$(NAME):
	clang++ -I$(HEADD) -c $(SRCS) -lncurses -o libncurse.o
	clang++ -shared libncurse.o -o $(NAME)
#	dylib	

tst:
	clang++ tst.cpp -I$(HEADD) $(SRCS) -lncurses -o tst

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all