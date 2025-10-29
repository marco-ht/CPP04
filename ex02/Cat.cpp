/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:00:01 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/29 01:38:43 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

// Orthodox Canonical Form
Cat::Cat():
Animal()
{
    brain = new Brain;
    this->type = "Cat";
    std::cout << "Cat: default constructor" << std::endl;
}

Cat::Cat(Cat &other):
Animal()
{
    brain = new Brain(*other.brain);
    this->type = other.type;
    std::cout << "Cat: copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    this->type = other.type;
    *this->brain = *other.brain;
    std::cout << "Cat: assignment operator" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat: destructor" << std::endl;
}
// End Orthodox Canonical Form

void    Cat::makeSound()
{
     std::cout << "Cat: meaw meaw!" << std::endl;
}

std::string    Cat::getType()
{
    return (Cat::type);
}

void    Cat::setId(int i, std::string str)
{
    brain->setIdeas(i, str);
}

std::string Cat::getId(int i)
{
    return(brain->getIdeas(i));
}
