NAME = libft.a

# TO DO : Rajouter src/ft_strlcpy.c

SRCS =  src/ft_memset.c  src/ft_bzero.c   src/ft_memcpy.c  src/ft_memccpy.c    \
		src/ft_memmove.c src/ft_memchr.c  src/ft_memcmp.c  src/ft_strlen.c     \
		src/ft_isalpha.c src/ft_isdigit.c src/ft_isalnum.c src/ft_isascii.c    \
		src/ft_isprint.c src/ft_toupper.c src/ft_tolower.c src/ft_strchr.c     \
		src/ft_strrchr.c src/ft_strncmp.c  src/ft_strlcat.c    \
		src/ft_strnstr.c src/ft_atoi.c    src/ft_calloc.c  src/ft_strdup.c     \
		src/ft_calloc.c  src/ft_strdup.c  src/ft_substr.c  src/ft_strjoin.c    \
		src/ft_strtrim.c src/ft_split.c   src/ft_itoa.c    src/ft_strmapi.c    \
		src/ft_putchar_fd.c 		      src/ft_putstr_fd.c				   \
		src/ft_putendl_fd.c 			  src/ft_putnbr_fd.c                   \
		bonus/ft_lstnew.c bonus/ft_lstadd_front.c bonus/ft_lstsize.c                 \
		bonus/ft_lstlast.c bonus/ft_lstadd_back.c bonus/ft_lstdelone.c			   \
		bonus/ft_lstclear.c bonus/ft_lstiter.c bonus/ft_lstmap.c

OBJS = ${SRCS:.c=.o}

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

.c.o:
	gcc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
