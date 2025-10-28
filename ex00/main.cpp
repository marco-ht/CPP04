/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:23:53 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 18:40:19 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    Animal *a = new Animal;
    Animal *b = new Dog;
    Animal *c = new Cat;

    std::cout << "type: " << b->getType() << " " << std::endl;
    std::cout << "type: " << c->getType() << " " << std::endl;

    a->makeSound();
    b->makeSound();
    c->makeSound();

    delete a;
    delete b;
    delete c;

    WrongAnimal *d = new WrongCat;
    std::cout << "type: " << d->getType() << " " << std::endl;
    d->makeSound();
    delete d;
    
}
