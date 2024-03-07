/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 20:52:40 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/20 16:04:34 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria():_type("amateria"){
}

AMateria::AMateria(const AMateria& obj){
    *this = obj;
}
        
const AMateria& AMateria::operator=(const AMateria& obj){
    if (&obj != this)
        _type = obj.getType();
    return (*this);
}

AMateria::AMateria(std::string const & type):_type(type){
}

std::string const & AMateria::getType() const{
    return (_type);
}

void AMateria::use(ICharacter& target){
    (void)target;
    std::cout << "Hi from AMateria use member function" << std::endl;
}

AMateria::~AMateria(){
}
