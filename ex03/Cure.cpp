/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:08:56 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 02:33:33 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

// Orthodox Canonical Form
Cure::Cure():
AMateria("cure")
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

Cure* Cure::clone() const
{
    return (new Cure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
}
