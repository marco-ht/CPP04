/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <mpierant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:08:38 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/10 18:39:35 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"

// Orthodox Canonical Form
Dog::Dog():
Animal()
{
    this->type = "Dog";
    std::cout << "Dog: default constructor" << std::endl;
}

Dog::Dog(Dog &other):
Animal()
{
    this->type = other.type;
    std::cout << "Dog: copy constructor" << std::endl;
}

Dog& Dog::operator=(Dog &other)
{
    this->type = other.type;
    std::cout << "Dog: assignment operator" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog: destructor" << std::endl;
}
// End Orthodox Canonical Form

void    Dog::makeSound()
{
     std::cout << "Dog: woof woof!" << std::endl;
}
