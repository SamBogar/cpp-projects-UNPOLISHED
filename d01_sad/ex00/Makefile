# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbogar <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/30 11:05:53 by sbogar            #+#    #+#              #
#    Updated: 2017/07/05 16:51:23 by sbogar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ponies

INCLUDE = Pony.hpp

FILES = main.cpp\
		Pony.cpp\

FLAGS = -Wall -Werror -Wextra

OBJS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	@gcc -c $(FLAGS) $^ -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re
