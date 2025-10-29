/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:08:38 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/29 01:38:24 by mpierant         ###   ########.fr       */
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
    brain = new Brain;
    this->type = "Dog";
    std::cout << "Dog: default constructor" << std::endl;
}

Dog::Dog(Dog &other):
Animal()
{
    brain = new Brain(*other.brain);
    this->type = other.type;
    std::cout << "Dog: copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    this->type = other.type;
    *this->brain = *other.brain;
    std::cout << "Dog: assignment operator" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog: destructor" << std::endl;
}
// End Orthodox Canonical Form

void    Dog::makeSound()
{
     std::cout << "Dog: woof woof!" << std::endl;
}

std::string    Dog::getType()
{
    return (Dog::type);
}

void    Dog::setId(int i, std::string str)
{
    brain->setIdeas(i, str);
}

std::string Dog::getId(int i)
{
    return(brain->getIdeas(i));
}
