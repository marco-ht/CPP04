/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <mpierant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:00:01 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/10 19:15:16 by mpierant         ###   ########.fr       */
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
    std::cout << "Cat: default constructor" << std::endl;
    brain = new Brain;
    this->type = "Cat";
}

Cat::Cat(Cat &other):
Animal()
{
    std::cout << "Cat: copy constructor" << std::endl;
    brain = new Brain(*other.brain);
    this->type = other.type;
}

Cat& Cat::operator=(const Cat &other)
{
    std::cout << "Cat: assignment operator" << std::endl;
    this->type = other.type;
    *this->brain = *other.brain;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat: destructor" << std::endl;
    delete brain;
}
// End Orthodox Canonical Form

void    Cat::makeSound()
{
     std::cout << "Cat: meaw meaw!" << std::endl;
}

void    Cat::setId(int i, std::string str)
{
    brain->setIdeas(i, str);
}

std::string Cat::getId(int i)
{
    return(brain->getIdeas(i));
}
