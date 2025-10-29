/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:26:34 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 18:27:01 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

// Orthodox Canonical Form
WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal: default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &other)
{
    this->type = other.type;
    std::cout << "WrongAnimal: copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal &other)
{
    this->type = other.type;
    std::cout << "WrongAnimal: assignment operator" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal: destructor" << std::endl;
}
// End Orthodox Canonical Form

void    WrongAnimal::makeSound()
{
    std::cout << "WrongAnimal: [Generic WrongAnimal sound..]" << std::endl;
}

std::string    WrongAnimal::getType()
{
    return (WrongAnimal::type);
}
