/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:05:36 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/29 01:39:19 by mpierant         ###   ########.fr       */
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
    
    protected:
    std::string type;

    public:
    // Orthodox Canonical Form
    Dog();
    Dog(Dog& other);
    Dog& operator=(const Dog &other);
    ~Dog();
    // End Orthodox Canonical Form

    void    makeSound();
    std::string    getType();
    
    void        setId(int i, std::string str);
    std::string getId(int i);
};

#endif
