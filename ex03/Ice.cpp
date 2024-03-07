/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:31:51 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/20 16:08:20 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():AMateria("ice"){
}

Ice::Ice(const Ice& obj):AMateria(obj){
}

const Ice& Ice::operator=(const Ice& obj){
    if (&obj != this)
        AMateria::operator=(obj);
    return (*this);
}

Ice::~Ice(){
}

AMateria* Ice::clone() const{
    return new Ice;
}

void Ice::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}