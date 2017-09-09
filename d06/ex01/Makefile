# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbogar <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/30 11:05:53 by sbogar            #+#    #+#              #
#    Updated: 2017/07/12 19:20:59 by sbogar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize

FILES = main.cpp

FLAGS = -Wall -Werror -Wextra

OBJS = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(FILES) -o $(NAME)

%.o: %.cpp
	@gcc -c $(FLAGS) $^ -o $@

clean:
	@rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re
