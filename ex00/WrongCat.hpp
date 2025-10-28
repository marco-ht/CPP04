/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:28:36 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 18:28:56 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongCat_HPP
# define WrongCat_HPP

#include <string>
#include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{
    protected:
    std::string type;

    public:
    // Orthodox Canonical Form
    WrongCat();
    WrongCat(WrongCat& other);
    WrongCat& operator=(WrongCat &other);
    ~WrongCat();
    // End Orthodox Canonical Form

    void    makeSound();
    std::string    getType();
};

#endif
