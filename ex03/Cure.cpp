/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:08:56 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/30 20:12:20 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Cure.hpp"

// Orthodox Canonical Form
Cure::Cure():
AMateria("Cure")
{
    std::cout << "Cure: default constructor" << std::endl;
}

Cure::Cure(Cure &other):
AMateria(&other)
{
    std::cout << "Cure: copy constructor" << std::endl;
}

Cure& Cure::operator=(const Cure &other)
{
    std::cout << "Cure: assignment operator" << std::endl;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure: destructor" << std::endl;
}
// End Orthodox Canonical Form

//Returns the materia type
std::string const & Cure::getType() const
{
    return (type);
}

Cure* Cure::clone() const
{
    return (new Cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getname() <<"’s wounds *" << std::endl;
}
