/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:11:00 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/30 18:51:14 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    this->type = type;
    std::cout << "AMateria: constructor" << std::endl;
}

// Orthodox Canonical Form
AMateria::AMateria()
{
    this->type = "AMateria";
    std::cout << "AMateria: default constructor" << std::endl;
}

AMateria::AMateria(AMateria &other)
{
    this->type = other.type;
    std::cout << "AMateria: copy constructor" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &other)
{
    std::cout << "AMateria: assignment operator" << std::endl;
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria: destructor" << std::endl;
}
// End Orthodox Canonical Form

//Returns the materia type
std::string const & AMateria::getType() const
{
    return (type);
}

void AMateria::use(ICharacter& target)
{
    if(target)
    {
    }
}
