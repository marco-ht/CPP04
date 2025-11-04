/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 01:08:01 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/04 21:06:06 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "MateriaSource.hpp"
#include "AMateria.hpp"
        
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

MateriaSource& MateriaSource::operator=(const MateriaSource &other)
{
    int i;
    
    if (this == &other)
        return *this;
    i = 0;
    while (i < 4) //copies materias in the 4 slots.
    {
        if (this->slots[i])
        {
            delete this->slots[i];
            this->slots[i] = NULL;
        }
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

    if (!m)
        return;
    i = 0;
    while (i < 4)
    {
        if (!slots[i])
        {
            slots[i] = m;
            std::cout << "Learned " << m->getType() << std::endl;
            return;
        }
        i++;
    }
    std::cout << "No space to learn more Materias" << std::endl;
    //delete m; (it is required to do nothing if slots full, delete in main)
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i;

    i = 0;
    while (i < 4)
    {
        if (slots[i] && slots[i]->getType() == type)
            return (slots[i]->clone()); //returns a deep copy (dinamic, in the heap)
        i++;
    }
    std::cout << "Unknown materia type" << std::endl;
    return (NULL);
}
