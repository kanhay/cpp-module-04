/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 11:33:12 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/20 15:17:23 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat";
    std::cout << "WrongCat constructor called for " << type << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj){
    std::cout << "WrongCat copy constructor called for " << type << std::endl;
    *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj){
    std::cout << "WrongCat copy assignment operator called for " << type << std::endl;
    if (&obj != this)
        type = obj.getType();
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called for " << type << std::endl;
}

void WrongCat::makeSound()const{
    std::cout << "WrongCat Meows" << std::endl;
}