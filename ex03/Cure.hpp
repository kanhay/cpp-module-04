/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:31:48 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/19 15:51:02 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
class ICharacter;

class Cure : public AMateria{
    public:
    Cure();
    Cure(const Cure& obj);
    const Cure& operator=(const Cure& obj);
    ~Cure();

    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
