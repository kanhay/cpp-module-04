/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:33:42 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/20 14:59:55 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal"){
    std::cout << "WrongAnimal constructor called for " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& obj){
    std::cout << "WrongAnimal copy constructor called for " << type << std::endl;
    *this = obj;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& obj){
    std::cout << "WrongAnimal copy assignment operator called for " << type << std::endl;
    if (&obj != this)
        type = obj.getType();
    return (*this);
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called for " << type << std::endl;
}

const std::string& WrongAnimal::getType()const{
    return (type);
}

void WrongAnimal::makeSound()const{
    std::cout << "WrongAnimal ..." << std::endl;
}