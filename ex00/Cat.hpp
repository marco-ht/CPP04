/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <mpierant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:57:51 by mpierant          #+#    #+#             */
/*   Updated: 2025/11/10 18:36:19 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <string>
#include "Animal.hpp"

class   Cat : public Animal
{
    public:
    // Orthodox Canonical Form
    Cat();
    Cat(Cat& other);
    Cat& operator=(Cat &other);
    ~Cat();
    // End Orthodox Canonical Form

    void    makeSound();
};

#endif
