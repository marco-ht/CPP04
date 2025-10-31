/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 01:57:36 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 04:52:59 by mpierant         ###   ########.fr       */
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

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->unequip(1);
    me->use(1, *bob);  //it does nothing because it's an empty slot now
    delete tmp;     //delete not done in unequip(), I do it here in main()
    delete bob;
    delete me;
    delete src;


    std::cout << std::endl << "* Test MateriaSource" << std::endl;
    MateriaSource msrc;
    msrc.learnMateria(new Ice());
    msrc.learnMateria(new Cure());
    AMateria* temp;

    temp = msrc.createMateria("ice");
    std::cout << "-->Created materia type: " << temp->getType() << std::endl;
    delete temp;

    temp = msrc.createMateria("cure");
    std::cout << "-->Created materia type: " << temp->getType() << std::endl;
    delete temp;

    std::cout << std::endl << "* Test Deep Copy " << std::endl;
    MateriaSource src2 = msrc; // copy constructor
    temp = src2.createMateria("ice");
    std::cout << "-->Created from copied object: " << temp->getType() << std::endl;
    delete temp;

    std::cout << std::endl << "* Test Copy Independence" << std::endl;
    src2.learnMateria(new Ice());
    src2.learnMateria(new Cure());
    // msrc e src2 devono essere indipendenti
    AMateria* t1 = msrc.createMateria("ice");
    AMateria* t2 = src2.createMateria("ice");
    std::cout << "-->Original src materia address: " << t1 << std::endl;
    std::cout << "-->Copied src2 materia address: " << t2 << std::endl;
    delete t1;
    delete t2;

    std::cout << std::endl  << "* Test Assignment Operator" << std::endl;
    MateriaSource src3;
    src3 = msrc; // using operator=
    temp = src3.createMateria("cure");
    std::cout << "-->Created from assigned object: " << temp->getType() << std::endl;
    delete temp;

    std::cout << std::endl << "* Test Self Assignment ===" << std::endl;
    src3 = src3; // no double free
    std::cout << "-->Self-assignment OK" << std::endl;

    std::cout << std::endl << "* Test Destructor" << std::endl;
    {
        MateriaSource temp;
        temp.learnMateria(new Ice());
        temp.learnMateria(new Cure());
        std::cout << "-->temp object destroyed..." << std::endl;
    } // out of object scope, object destroyed automatically
}
