NAME = libft.a

SRCS = $(wildcard ft_*.c)

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

HEADER = libft.h 

AR = ar rcs

RM = rm -f 

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)


%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)


re: fclean all