/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:31:56 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/19 14:02:57 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
class ICharacter;

class Ice : public AMateria{
    public:
    Ice();
    Ice(const Ice& obj);
    const Ice& operator=(const Ice& obj);
    ~Ice();

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
