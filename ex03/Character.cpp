/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:21:16 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 03:56:14 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"

// Orthodox Canonical Form
Character::Character()
{
    int i;

    name = "no_name";
    i = 0;
    while (i < 4)
        slots[i++] = NULL;
    std::cout << "Character: default constructor" << std::endl;
}

Character::Character(const Character &other)
{
    int i;
    
    this->name = other.name;
    i = 0;
    while (i < 4) //copies materias in the 4 slots.
    {
        slots[i] = NULL;
        if (other.slots[i])
            this->slots[i] = other.slots[i]->clone();   //deep cpy
        i++;
    }
    std::cout << "Character: copy constructor" << std::endl;
}

Character& Character::operator=(const Character &other)
{
    int i;

    if (this == &other)
        return (*this);
    this->name = other.name;
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
    std::cout << "Character: assignment operator" << std::endl;
    return (*this);
}

Character::~Character()
{
    int i;
    
    i = 0;  //the unequipped ones are handled (deleted) in the main()
    while (i < 4) //frees allocated memory of Materias in the slots
    {
        if (this->slots[i])
            delete this->slots[i];
        i++;
    }
    std::cout << "Character: destructor" << std::endl;
}
// End Orthodox Canonical Form

Character::Character(std::string const & name)
{
    int i;
    
    this->name = name;
    i = 0;
    while (i < 4)
        slots[i++] = NULL;
    std::cout << "Character: constructor" << std::endl;
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
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
            return;
        }
        i++;
    }
    //delete m; (it is required to do nothing if slots full, delete in main)
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        slots[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && slots[idx])
        slots[idx]->use(target);
}
