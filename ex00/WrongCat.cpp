/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:30:31 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 18:31:01 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// Orthodox Canonical Form
WrongCat::WrongCat():
WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat: default constructor" << std::endl;
}

WrongCat::WrongCat(WrongCat &other):
WrongAnimal()
{
    this->type = other.type;
    std::cout << "WrongCat: copy constructor" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat &other)
{
    this->type = other.type;
    std::cout << "WrongCat: assignment operator" << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat: destructor" << std::endl;
}
// End Orthodox Canonical Form

void    WrongCat::makeSound()
{
     std::cout << "WrongCat: meaw meaw!" << std::endl;
}
