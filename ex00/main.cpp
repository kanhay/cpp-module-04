/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:10:23 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/20 15:56:01 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{    
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << meta->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* w = new WrongAnimal();
    const WrongAnimal* wa = new WrongCat();
    
    std::cout << w->getType() << std::endl;
    std::cout << wa->getType() << std::endl;

    w->makeSound();
    wa->makeSound();
    
    delete wa;
    delete w;
    delete i;
    delete j;
    delete meta;
    return 0;
}