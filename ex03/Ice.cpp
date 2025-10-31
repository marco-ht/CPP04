/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:53:12 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 02:33:25 by mpierant         ###   ########.fr       */
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
Ice::Ice():
AMateria("ice")
{
    std::cout << "Ice: default constructor" << std::endl;
}

Ice::Ice(Ice &other):
AMateria(&other)
{
    std::cout << "Ice: copy constructor" << std::endl;
}

Ice& Ice::operator=(const Ice &other)
{
    std::cout << "Ice: assignment operator" << std::endl;
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice: destructor" << std::endl;
}
// End Orthodox Canonical Form

Ice* Ice::clone() const
{
    return (new Ice);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}
