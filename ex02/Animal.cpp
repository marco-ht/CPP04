/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:53:09 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/29 02:29:09 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"

// Orthodox Canonical Form
Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal: default constructor" << std::endl;
}

Animal::Animal(Animal &other)
{
    this->type = other.type;
    std::cout << "Animal: copy constructor" << std::endl;
}

Animal& Animal::operator=(Animal &other)
{
    this->type = other.type;
    std::cout << "Animal: assignment operator" << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal: destructor" << std::endl;
}
// End Orthodox Canonical Form

/* void    Animal::makeSound()
{
    std::cout << "Animal: [Generic animal sound..]" << std::endl;
} */

std::string    Animal::getType()
{
    return (Animal::type);
}

/* void    Animal::setId(int i, std::string str)
{
    std::cout << "Animal: can't set idea '" << str << "' in position " << i << std::endl;
}

std::string    Animal::getId(int i)
{
    std::cout << "Animal: can't get idea " << i << std::endl;
    return("");
} */
