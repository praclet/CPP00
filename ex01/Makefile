NAME			=	phone_book

SRCS			=	contact.cpp \
					phone_book.cpp \
					main.cpp
HEADERS			=	contact.hpp \
					phone_book.hpp

SRCS_DIR		=	./srcs/
HEADERS_DIR		=	./headers/
OBJS_DIR		=	./objs/
DEP_DIR			=	./dependencies/

#################################################################

vpath				%.cpp $(SRCS_DIR)
vpath				%.h $(HEADERS_DIR)
vpath				%.o $(OBJS_DIR)
vpath				%.d $(DEP_DIR)

OBJS			=	$(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))
DEP				=	$(addprefix $(DEP_DIR), $(SRCS:.cpp=.d))

CC				=	clang++
CFLAGS			=	-Wall -Wextra -Werror -std=c++98
DEPFLAGS		=	-MT $@ -MMD -MP -MF $(DEP_DIR)$*.d

all				:	$(NAME)

$(NAME)			:	$(OBJS) | $(OBJS_DIR)
					$(CC) $(CFLAGS) $(DEPFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)%.o	:	%.cpp $(DEP_DIR)%.d | $(DEP_DIR)
					$(CC) ${CFLAGS} $(DEPFLAGS) -o $@ -c $<

$(DEP_DIR)		:
					mkdir -p $(DEP_DIR)

$(OBJS_DIR)		:
					mkdir -p $(OBJS_DIR)

clean			:
					rm -rf $(OBJS_DIR)

fclean			:	clean
					rm -rf $(DEP_DIR)
					rm -rf $(NAME)

re				:	fclean	all

.PHONY			:	all clean fclean re

$(DEP)			:
include $(wildcard $(DEP))
