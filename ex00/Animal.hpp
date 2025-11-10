/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <mpierant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:48:02 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/10 18:38:35 by mpierant         ###   ########.fr       */
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
    std::string    getType();
};

#endif
