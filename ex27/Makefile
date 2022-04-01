NAME=ft_display_file

CC=gcc

CC_FLAGS=-Wall -Werror -Wextra

OBJ=main.o ft_display_file.o

SRCS=main.c ft_display_file.c

all: $(NAME)
	make clean

$(NAME): $(OBJ)
	$(CC) $(CC_FLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CC_FLAGS) -c $(SRCS)

re: fclean
	make all

fclean: clean
	rm ft_display_file

clean:
	rm -rf *.o
