NAME = info

SRCDIR = srcs
OBJDIR = objs
INCDIR = includes

CC = c++ -std=c++98
CFLAGS = -Wall -Wextra -Werror -g -MD
MEM = #-fsanitize=thread

ifeq ($(TMEM),0)
MEM =
endif

INC = 	includes/watever.hpp

SRC =	srcs/main.cpp

OBJS = $(addprefix ${OBJDIR}/,${SRC:.cpp=.o})
DEP = $(addprefix ${OBJDIR}/,${SRC:.cpp=.d})

all: ${NAME}

RED="\033[1;31m"
GREEN="\033[1;32m"
YELLOW="\033[1;33m"
BLUE="\033[1;34m"
PURPLE="\033[1;35m"
CYAN="\033[1;36m"
GREY="\033[0;37m"
RESET="\033[m"

-include $(DEP)

$(NAME): ${OBJS}
	${CC} ${CFLAGS} ${MEM} ${OBJS} -I./${INCDIR} -o $@

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(dir $@)
	${CC} ${CFLAGS} ${MEM} -I./${INCDIR} -c $< -o $@

re: fclean all

clean:
	@echo  "Cleaning objects\c"
	@rm -rf ${OBJDIR} $(DEP)
	@echo "\033[32m\t[OK]\033[0m"

fclean: clean
	@echo  "Removing info\c"
	@rm -rf ${NAME}
	@echo "\033[32m\t[OK]\033[0m"

.PHONY : all clean re fclean