/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:57:51 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 18:00:37 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include "Animal.hpp"

class   Cat : public Animal
{
    protected:
    std::string type;

    public:
    // Orthodox Canonical Form
    Cat();
    Cat(Cat& other);
    Cat& operator=(Cat &other);
    ~Cat();
    // End Orthodox Canonical Form

    void    makeSound();
    std::string    getType();
};

#endif
