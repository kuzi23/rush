CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c) #this will automaically find all c. files im the current directory
OBJ = $(SRC: .c=.o)
LIBRARY = libft.a

.PHONY: all clean fclean re

all: $(LIBRARY)

$(LIBRARY): $(OBJ)
	ar rcs $(LIBRARY) $(OBJ)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean 
	rm -f $(LIBRARY)

re: fclean all                                