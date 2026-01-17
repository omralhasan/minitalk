CC = cc
CFLAGS = -Wall -Wextra -Werror -fPIC
NAME = libftprintf.a
LIBFT_DIR = ./libft
LIBFT_A = libft.a
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_put_hex.c ft_put_ptr.c
OBJ = $(SRC:.c=.o)


all : $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFT_DIR)
	cp $(LIBFT_DIR)/$(LIBFT_A) .
	mv $(LIBFT_A) $(NAME)
	ar rcs $(NAME) $(OBJ)

clean :
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)

fclean : clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re