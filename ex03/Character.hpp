/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:10:30 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/20 10:45:15 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character:public ICharacter{
    private:
        std::string _name;
        AMateria *inventory[4];
    public:
    Character();
    Character(const std::string& name);
    Character(const Character& obj);
    const Character& operator=(const Character& obj);
    ~Character();
    
    const std::string & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif
