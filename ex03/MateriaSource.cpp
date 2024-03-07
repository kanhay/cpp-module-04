/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:16:44 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/20 16:10:57 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& obj){
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    *this = obj;
}

const MateriaSource& MateriaSource::operator=(const MateriaSource& obj){
    if (this != &obj){
        for (int i = 0; i < 4; i++){
            if (inventory[i])
                delete inventory[i];
            if (obj.inventory[i])
                inventory[i] = obj.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }   
    return (*this);
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++){
            if (inventory[i])
                delete inventory[i];}
}

void MateriaSource::learnMateria(AMateria* m){
    for (int i = 0; i < 4; i++){
        if(!inventory[i]){
            inventory[i] = m;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++){
        if(inventory[i] && inventory[i]->getType() == type){
            return(inventory[i]->clone());
        }
    }
    return 0;
}
