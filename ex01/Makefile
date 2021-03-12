NAME		:=	phone_book

SRCS		:=	contact.cpp \
				main.cpp

CC			:=	clang++
CFLAGS		:=	-Wall -Wextra -Werror

RM			:=	rm -f

##########################################################

OBJS		:=	$(SRCS:.cpp=.o)

.SILENT		:
.PHONY		:	all clean fclean re


%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@
	echo './$@ generated.'

all : $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(CFLAGS) $? -o $(NAME)
	echo './$(NAME) completed.'

fclean		: clean
	$(RM) $(NAME)
	echo './$(NAME) deleted.'

clean		:
	$(RM) $(OBJS)
	echo './$(OBJS) deleted.'

re			:	fclean all
