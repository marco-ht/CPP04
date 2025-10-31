/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:11:00 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 02:08:17 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"

AMateria::AMateria(std::string const & type):
type(type)
{
    std::cout << "AMateria: constructor" << std::endl;
}

// Orthodox Canonical Form
AMateria::AMateria():
type("AMateria")
{
    std::cout << "AMateria: default constructor" << std::endl;
}

AMateria::AMateria(AMateria &other):
type(other.type)
{
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
