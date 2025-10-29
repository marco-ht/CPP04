/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:21:45 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/28 18:22:13 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>

class   WrongAnimal
{
    protected:
    std::string type;

    public:
    // Orthodox Canonical Form
    WrongAnimal();
    WrongAnimal(WrongAnimal& other);
    WrongAnimal& operator=(WrongAnimal &other);
    ~WrongAnimal();
    // End Orthodox Canonical Form

    void    makeSound();
    std::string    getType();
};

#endif
