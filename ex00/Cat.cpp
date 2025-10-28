/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:00:01 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 18:02:32 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Cat.hpp"

// Orthodox Canonical Form
Cat::Cat():
Animal()
{
    this->type = "Cat";
    std::cout << "Cat: default constructor" << std::endl;
}

Cat::Cat(Cat &other):
Animal()
{
    this->type = other.type;
    std::cout << "Cat: copy constructor" << std::endl;
}

Cat& Cat::operator=(Cat &other)
{
    this->type = other.type;
    std::cout << "Cat: assignment operator" << std::endl;
    return (*this);
}

Cat::~Cat()
{
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
