/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:11:10 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/18 15:16:23 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():brain(new Brain()){
    type = "Cat";
    std::cout << "Cat constructor called for " << getType() << std::endl;
}

Cat::Cat(const Cat& obj){
    std::cout << "Cat copy constructor called for " << getType() << std::endl;
    brain = NULL;
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj){
    std::cout << "Cat copy assignment operator called for " << getType() << std::endl;
    if (&obj != this){
        type = obj.getType();
        if(brain)
            delete (brain);
        brain = new Brain;
        *brain = *(obj.brain);
    }
    return (*this);
}

Cat::~Cat(){
    delete brain;
    std::cout << "Cat destructor called for " << getType() << std::endl;
}

void Cat::makeSound()const{
    std::cout << "Cat Meows" << std::endl;
}
