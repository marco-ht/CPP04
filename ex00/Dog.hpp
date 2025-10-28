/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:05:36 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 17:38:44 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include "Animal.hpp"

class   Dog : public Animal
{
    protected:
    std::string type;

    public:
    // Orthodox Canonical Form
    Dog();
    Dog(Dog& other);
    Dog& operator=(Dog &other);
    ~Dog();
    // End Orthodox Canonical Form

    void    makeSound();
    std::string    getType();
};

#endif
