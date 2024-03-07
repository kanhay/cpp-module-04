/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:11:17 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/15 11:06:41 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
    std::cout << "Dog constructor called for " << getType() << std::endl;
}

Dog::Dog(const Dog& obj){
    std::cout << "Dog copy constructor called for " << getType() << std::endl;
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj){
    std::cout << "Dog copy assignment operator called for " << getType() << std::endl;
    if (&obj != this)
        type = obj.getType();
    return (*this);
}

Dog::~Dog(){
    std::cout << "Dog destructor called for " << getType() << std::endl;
}

void Dog::makeSound()const{
    std::cout << "Dog Barks" << std::endl;
}
