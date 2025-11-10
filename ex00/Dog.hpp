/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <mpierant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:05:36 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/10 18:39:03 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include "Animal.hpp"

class   Dog : public Animal
{
    public:
    // Orthodox Canonical Form
    Dog();
    Dog(Dog& other);
    Dog& operator=(Dog &other);
    ~Dog();
    // End Orthodox Canonical Form

    void    makeSound();
};

#endif
