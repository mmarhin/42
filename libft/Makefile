NAME = libft.a

CC = gcc 
CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c 
OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo "LIBRERÍA $(NAME) CREADA"

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean :
	@rm -rf $(OBJ)
	@echo "Archivos objeto eliminados"

fclean : clean 
	@rm -rf $(NAME)
	@echo "LIBRERÍA $(NAME) ELIMINADA"
 
re : fclean all
.PHONY: all clean fclean re
