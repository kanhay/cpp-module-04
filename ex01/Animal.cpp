/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:11:13 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/15 12:15:54 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Animal"){
    std::cout << "Animal constructor called for " << type << std::endl;
}

Animal::Animal(const Animal& obj){
    std::cout << "Animal copy constructor called for " << type << std::endl;
    *this = obj;
}

Animal& Animal::operator=(const Animal& obj){
    std::cout << "Animal copy assignment operator called for " << type << std::endl;
    if (&obj != this)
        type = obj.getType();
    return (*this);
}

Animal::~Animal(){
    std::cout << "Animal destructor called for " << type << std::endl;
}

const std::string& Animal::getType()const{
    return (type);
}

void Animal::makeSound()const{
    std::cout << "Animal makes sound" << std::endl;
}
