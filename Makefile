NAME = push_swap

LIBFTDIR = ./libft/libft.a

CFLAGS = -Wall -Wextra -Werror -g 
#-fsanitize=address
SRC =	lst_utils/ft_lstadd_back_push_swap.c \
 		lst_utils/ft_lstadd_front_push_swap.c \
 		lst_utils/ft_lstlast_push_swap.c \
 		lst_utils/ft_lstnew_push_swap.c \
 		lst_utils/ft_lstsize_push_swap.c \
 		swap_functions.c \
		utils/argument_check.c \
 		utils/atoi2.c \
 		utils/split2.c \
 		utils/stack.c \
		utils/sorting.c \
 		main.c \
#		libft/*.c

OBJS = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
		$(MAKE) -C ./libft
		gcc $(CFLAGS) $(OBJS) $(LIBFTDIR) -o $@
#		gcc $(CFLAGS) $(OBJS) $(LIBFTDIR) -c $< -o $@

clean:
		$(MAKE) -C ./libft fclean
		rm -f $(OBJS)

fclean:
		rm -f $(NAME)

re : 
	fclean all

.PHONY : all clean fclean re

# NAME = push_swap

# LIBFTDIR = ../libft/libft.a
# INCLUDELIBFT = -L libft -lft
# CFLAGS = -Wall -Wextra -Werror -g -I $(LIBFTDIR)
# #¿no es necesario -I $(LIBFTDIR)?

# SRC =	libft/*.c \
# 		utils/argument_check.c \
# 		utils/atoi2.c \
# 		utils/split2.c \
# 		utils/stack.c \
# 		lst_utils/ft_lstadd_back_push_swap.c \
# 		lst_utils/ft_lstadd_front_push_swap.c \
# 		lst_utils/ft_lstlast_push_swap.c \
# 		lst_utils/ft_lstnew_push_swap.c \
# 		lst_utils/ft_lstsize_push_swap.c \
# 		operations/swap_functions.c \
# 		main.c
		
# OBJS = $(SRC:.c=.o)

# %.o:%.c
# 	gcc $(CFLAGS) -c $< -o $@ 



# $(NAME) : $(OBJS)
# 	make -C libft
# 	gcc $(CFLAGS) $(OBJS) $(INCLUDELIBFT) -o $(NAME)
# #	gcc $(CFLAGS) $(OBJS) -o $(NAME)

# all : $(NAME)

# clean : 
# 	rm -f $(OBJS)
# #	make clean -C libft borra todo

# fclean : clean
# 	rm -f $(NAME)

# re : fclean all

# .PHONY : all clean fclean re