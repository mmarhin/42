NAME = libftprintf.a

CC = gcc 
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c  
OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all : $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) -C $(LIBFT_DIR)
	@cp $(LIBFT) .
	@ar rcs $(NAME) $(OBJ) libft.a
	@echo "LIBRERÍA $(NAME) CREADA"

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean :
	@rm -rf $(OBJ)
	@$(MAKE) clean -C $(LIBFT_DIR)
	@echo "Archivos objeto eliminados"

fclean : clean 
	@rm -rf $(NAME) libft.a
	@$(MAKE) fclean -C $(LIBFT_DIR)
	@echo "LIBRERÍA $(NAME) HA SIDO LIMPIADA COMPLETAMENTE"
 
re : fclean all
.PHONY: all clean fclean re
