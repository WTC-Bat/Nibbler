NAME = libncurse.so
SRCD = "./src/"
HEADD = "./include/"
FLAG = -Wall -Werror -Wextra

SRCS = $(SRCD)LibNCurse.cpp

all: $(NAME)

$(NAME):
	clang++ -I$(HEADD) -c $(SRCS)LibNCurse.cpp -lncurses -o libncurse.o
	clang++ -shared libncurse.o -o $(NAME)
#	dylib	

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all