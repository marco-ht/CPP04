/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:48:02 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/29 00:15:29 by mpierant         ###   ########.fr       */
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

    virtual void    makeSound();
    virtual std::string    getType();
    virtual void    setId(int i, std::string str);
    virtual std::string    getId(int i);
};

#endif
