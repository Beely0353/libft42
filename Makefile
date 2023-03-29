RED		=	\033[31m
GRE		=	\033[32m
BLU		=	\033[34m
YEL		=	\033[33m
EOC		=	\033[0m

SRCS =	ft_atoi.c ft_itoa.c \
		ft_tolower.c ft_toupper.c \
		ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strdup.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c \
		ft_bzero.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_calloc.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_substr.c 
		
SRCS_B = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
		ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
		ft_lstmap.c ft_lstnew.c ft_lstsize.c


OBJS  = $(SRCS:.c=.o)

OBJS_B = $(SRCS_B:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
			@clear
			@printf "\033[K📚 Archivage de la ""$(GRE)libft$(EOC). 📚"
			@ar crs $(NAME) $(OBJS)

bonus: $(OBJS_B)
			@clear
			@printf "\033[K📚 Archivage des ""$(GRE)bonus$(EOC). 📚"
			@ar crs $(NAME) $(OBJS_B)

.c.o:
	@clear
	@printf "\r\033[K⏳ Compilation de ""$(YEL)${notdir $<}$(EOC). ⏳"
	@gcc -Werror -Wextra -Wall -c $< -o $(<:.c=.o)


clean:
	@echo "🗑  $(RED)Supression des fichiers binaires (.o).$(EOC) 🗑"
	@rm -rf $(OBJS) $(OBJS_B)

fclean: clean
	@echo "🗑  $(RED)Supression des executables et librairies.$(EOC) 🗑"
	@rm -rf $(NAME)

re: 	fclean all

.PHONY: all clean fclean re bonus
