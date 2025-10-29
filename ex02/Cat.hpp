/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:57:51 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/29 01:39:24 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class   Cat : public Animal
{
    private:
    Brain *brain;
    
    protected:
    std::string type;

    public:
    // Orthodox Canonical Form
    Cat();
    Cat(Cat& other);
    Cat& operator=(const Cat &other);
    ~Cat();
    // End Orthodox Canonical Form

    void    makeSound();
    std::string    getType();

    void        setId(int i, std::string str);
    std::string getId(int i);
};

#endif
