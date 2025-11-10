/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <mpierant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:48:02 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/10 19:24:54 by mpierant         ###   ########.fr       */
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

    virtual void    makeSound() = 0; //pure virtual function->abstract class
    std::string    getType();
    virtual void    setId(int i, std::string str);
    virtual std::string    getId(int i);
};

#endif
