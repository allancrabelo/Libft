CC = cc
CFLAGS = -Wall -Wextra -Werror -g
NAME = libft.a
SRCS = ft_isalpha.c ft_isdigit.c ft_isanum.c ft_strlen.c ft_atoi.c

BONUS_SCRS = 

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