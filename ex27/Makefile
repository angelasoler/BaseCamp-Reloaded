NAME=ft_display_file

CC=gcc

CC_FLAGS=-Wall -Werror -Wextra

all: $(NAME)
	make clean

$(NAME): main.c
	$(CC) $(CC_FLAGS) main.c

re: fclean
	make all

fclean: clean
	rm ft_display_file

clean:
	rm -rf *.o
