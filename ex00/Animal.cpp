/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:53:09 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 18:01:41 by mpierant         ###   ########.fr       */
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

void    Animal::makeSound()
{
    std::cout << "Animal: [Generic animal sound..]" << std::endl;
}

std::string    Animal::getType()
{
    return (Animal::type);
}
