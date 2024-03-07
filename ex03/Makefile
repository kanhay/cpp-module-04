# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/19 18:43:29 by khanhayf          #+#    #+#              #
#    Updated: 2023/12/20 12:15:07 by khanhayf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia
SRC = AMateria.cpp Cure.cpp Ice.cpp ICharacter.cpp Character.cpp IMateriaSource.cpp MateriaSource.cpp main.cpp
OBJ = AMateria.o Cure.o Ice.o ICharacter.o Character.o IMateriaSource.o MateriaSource.o main.o
CC = c++
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
HEAD = AMateria.hpp Cure.hpp Ice.hpp ICharacter.hpp Character.hpp IMateriaSource.hpp MateriaSource.hpp
RM = rm -rf

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ) 

%.o : %.cpp $(HEAD)
	$(CC) $(CPPFLAGS) -c $<
	
clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all