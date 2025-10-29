/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:48:02 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/29 02:28:39 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class   Animal
{
    protected:
    std::string type;

    public:
    // Orthodox Canonical Form
    Animal();
    Animal(Animal& other);
    Animal& operator=(Animal &other);
    virtual ~Animal();
    // End Orthodox Canonical Form

    virtual void makeSound() = 0; //pure virtual function->abstract class
    virtual std::string    getType();
    virtual void    setId(int i, std::string str) = 0;
    virtual std::string    getId(int i) = 0;
};

#endif
