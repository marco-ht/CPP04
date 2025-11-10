/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <mpierant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:05:36 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/10 18:56:59 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class   Dog : public Animal
{
    private:
    Brain *brain;
    
    public:
    // Orthodox Canonical Form
    Dog();
    Dog(Dog& other);
    Dog& operator=(const Dog &other);
    ~Dog();
    // End Orthodox Canonical Form

    void    makeSound();
    
    void        setId(int i, std::string str);
    std::string getId(int i);
};

#endif
