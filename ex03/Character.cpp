/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:10:20 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/20 10:47:09 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character():_name("character"){
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const std::string& name):_name(name){
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const Character& obj){
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
    *this = obj;
}

const Character& Character::operator=(const Character& obj){
    if (&obj != this){
        _name = obj.getName();
        for (int i = 0; i < 4; i++){
            if (inventory[i])
                delete inventory[i];
            if(obj.inventory[i])
                inventory[i] = obj.inventory[i]->clone();
            else
                inventory[i] = NULL;
        }
    }
    return (*this);
}

Character::~Character(){
    for (int i = 0; i < 4; i++){
            if (inventory[i])
                delete inventory[i];}
}

std::string const& Character::getName() const{
    return (_name);
}

void Character::equip(AMateria* m){
    for (int i = 0; i < 4; i++){
        if (!inventory[i]){
            inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx){
    if ((idx >= 0 && idx < 4) && inventory[idx])
        inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
    if ((idx >= 0 && idx < 4) && inventory[idx])
        inventory[idx]->use(target);
}
