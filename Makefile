CC = cc
CFLAGS = -Wall -Wextra -Werror -g
NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_atoi.c ft_strdup.c

BONUS_SCRS = 
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
				ar rc $(NAME) $(OBJS)
			
bonus:


clean:
				rm -rf $(OBJS) $(BONUS_SCRS)

fclean: clean
				rm -rf $(NAME)

re: fclean all

so:
				$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS) $(BONUS_SCRS)
				$(CC) -nostartfiles -shared -o libft.so $(OBJS) $(BONUS_SCRS)

.SILENT: