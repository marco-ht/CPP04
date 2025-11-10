/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <mpierant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:08:38 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/10 19:15:05 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

// Orthodox Canonical Form
Dog::Dog():
Animal()
{
    std::cout << "Dog: default constructor" << std::endl;
    brain = new Brain;
    this->type = "Dog";
}

Dog::Dog(Dog &other):
Animal()
{
    std::cout << "Dog: copy constructor" << std::endl;
    brain = new Brain(*other.brain);
    this->type = other.type;
}

Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog: assignment operator" << std::endl;
    this->type = other.type;
    *this->brain = *other.brain;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog: destructor" << std::endl;
    delete brain;
}
// End Orthodox Canonical Form

void    Dog::makeSound()
{
     std::cout << "Dog: woof woof!" << std::endl;
}

void    Dog::setId(int i, std::string str)
{
    brain->setIdeas(i, str);
}

std::string Dog::getId(int i)
{
    return(brain->getIdeas(i));
}
