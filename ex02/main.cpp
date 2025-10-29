/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:23:53 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/29 02:33:58 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    /* Animal animal1; */

    //if we try to create an animal object it doesn't compile anymore
    //everything else works as before
    
    
    //Array of animals
    int i;
    Animal *a[10];

    std::cout << "Array of animals" << std::endl;
    i = 0;
    while (i < 5)
        a[i++] = new Dog;
    while (i < 10)
        a[i++] = new Cat;
    //Show Type
    i = 0;
    while (i < 10)
    {
        std::cout << "type: " << a[i]->getType() << " " << std::endl;
        i++;
    }
    //Make sound
    i = 0;
    while (i < 10)
        a[i++]->makeSound();
    //Deleting animals
    i = 0;
    while (i < 10)
        delete a[i++];
    
    //Deep copy test
    //(changing the copied dog, the original one doesen't change)
    std::cout << std::endl << "Deep copy test." << std::endl;
    Dog dog1;
    dog1.setId(0, "hi, I am rufus");
    dog1.setId(1, "I am a dog");
    Dog dog2;
    dog2 = dog1;
    std::cout << "printing dog1:" << std::endl;
    std::cout << dog1.getId(0) << std::endl;
    std::cout << dog1.getId(1) << std::endl;
    std::cout << "printing dog2:" << std::endl;
    std::cout << dog2.getId(0) << std::endl;
    std::cout << dog2.getId(1) << std::endl;
    std::cout << "changing dog2." << std::endl;
    dog2.setId(0, "Hello! Hello!");
    dog2.setId(1, "I am bernard the tiger");
    std::cout << "printing dog2:" << std::endl;
    std::cout << dog2.getId(0) << std::endl;
    std::cout << dog2.getId(1) << std::endl;
    std::cout << "printing dog1 to check it didn't change:" << std::endl;
    std::cout << dog1.getId(0) << std::endl;
    std::cout << dog1.getId(1) << std::endl;
}
