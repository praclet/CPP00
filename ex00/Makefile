NAME		:=	megaphone

SRCS		:=	megaphone.cpp

CC			:=	clang++
CFLAGS		:=	-Wall -Wextra -Werror

RM			:=	rm -f

##########################################################

.SILENT		:
.PHONY		:	all clean fclean re

all $(NAME)	: $(SRCS)
	$(CC) $(CFLAGS) -c $< -o $(NAME)
	echo './$(NAME) completed.'

clean fclean		:
	$(RM) $(NAME)
	echo './$(NAME) deleted.'

re			:	fclean all
