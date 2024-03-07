/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khanhayf <khanhayf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 10:10:23 by khanhayf          #+#    #+#             */
/*   Updated: 2023/12/15 19:05:27 by khanhayf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    unsigned int N = 4;

    Animal* meta[N];
    for (unsigned int i = 0; i < N; i++){
        if (i < N/2)
            meta[i] = new Cat;
        else
            meta[i] = new Dog;
    }
    for (unsigned int i = 0; i < N; i++)
        delete meta[i];
    return 0;
}
