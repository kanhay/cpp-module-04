/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:53:34 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/15 17:42:03 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& obj){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = obj;
}

Brain& Brain::operator=(const Brain& obj){
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (&obj != this)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = obj.ideas[i];
    }
    return (*this);
}

Brain::~Brain(){
    std::cout << "Brain destructor called" << std::endl;
}
