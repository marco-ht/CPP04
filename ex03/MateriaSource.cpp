/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 01:08:01 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 01:59:58 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
        
// Orthodox Canonical Form
MateriaSource::MateriaSource()
{
    int i;

    i = 0;
    while (i < 4)
        slots[i++] = NULL;
    std::cout << "MateriaSource: default constructor" << std::endl;
    
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    int i;
    
    i = 0;
    while (i < 4) //copies materias in the 4 slots.
    {
        slots[i] = NULL;
        if (other.slots[i])
            this->slots[i] = other.slots[i]->clone();   //deep cpy
        i++;
    }
    std::cout << "MateriaSource: copy constructor" << std::endl;
}

MateriaSource& operator=(const MateriaSource &other)
{
    int i;
    
    i = 0;
    while (i < 4) //copies materias in the 4 slots.
    {
        if (this->slots[i])
            delete this->slots[i];
        if (other.slots[i])
            this->slots[i] = other.slots[i]->clone();   //deep cpy
        i++;
    }
    std::cout << "MateriaSource: assignment operator" << std::endl;
    return (*this);
}

MateriaSource::~MateriaSource()
{
    int i;
    
    i = 0;
    while (i < 4) //frees allocated memory of Materias in the slots
    {
        if (this->slots[i])
            delete this->slots[i];
        i++;
    }
    std::cout << "MateriaSource: destructor" << std::endl;
}
// End Orthodox Canonical Form

void MateriaSource::learnMateria(AMateria* m)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (!slots[i])
        {
            slots[i] = m;
            return;
        }
        i++;
    }
    //delete m; (a livello di main)
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (slots[i] && slots[i]->getType() == type)
            return (slots[i].clone());
        i++;
    }
    return (NULL);
}
