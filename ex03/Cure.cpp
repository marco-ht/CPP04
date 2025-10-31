/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:08:56 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 03:58:04 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "ICharacter.hpp"

// Orthodox Canonical Form
Cure::Cure():
AMateria("cure")
{
    std::cout << "Cure: default constructor" << std::endl;
}

Cure::Cure(const Cure &other):
AMateria(other)
{
    std::cout << "Cure: copy constructor" << std::endl;
}

Cure& Cure::operator=(const Cure &other)
{
    (void)other;
    std::cout << "Cure: assignment operator" << std::endl;
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure: destructor" << std::endl;
}
// End Orthodox Canonical Form

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
}
