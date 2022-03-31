NAME=libft.a

CC=gcc

CC_FLAGS=-Wall -Werror -Wextra

OBJ=ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)
	make clean

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

%.o: ./srcs/%.c ./includes/ft.h
	$(CC) -c $(CC_FLAGS) $< -o $@

re: fclean
	make all

fclean: clean
	rm libft.a
	rm a.out

clean:
	rm -rf *.o *~
