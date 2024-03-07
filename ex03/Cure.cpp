/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:31:45 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/19 21:39:32 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():AMateria("cure"){
}

Cure::Cure(const Cure& obj){
    *this = obj;
}

const Cure& Cure::operator=(const Cure& obj){
    if (&obj != this)
        AMateria::operator=(obj);
    return (*this);
}

Cure::~Cure(){
}

AMateria* Cure::clone() const{
    return new Cure;
}

void Cure::use(ICharacter& target){
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
