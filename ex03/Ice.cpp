/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:53:12 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 03:59:01 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "ICharacter.hpp"

// Orthodox Canonical Form
Ice::Ice():
AMateria("ice")
{
    std::cout << "Ice: default constructor" << std::endl;
}

Ice::Ice(const Ice &other):
AMateria(other)
{
    std::cout << "Ice: copy constructor" << std::endl;
}

Ice& Ice::operator=(const Ice &other)
{
    (void)other;
    std::cout << "Ice: assignment operator" << std::endl;
    return (*this);
}

Ice::~Ice()
{
    std::cout << "Ice: destructor" << std::endl;
}
// End Orthodox Canonical Form

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}
