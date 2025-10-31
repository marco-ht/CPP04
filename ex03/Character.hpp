/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:15:01 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 03:20:30 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"

class   AMateria;

class   Character : public ICharacter
{
    private:
        std::string name;
        AMateria    *slots[4]; //For this we need abstract AMateria (we can store any derivated classes object)

    public:
        // Orthodox Canonical Form
        Character();
        Character(const Character& other);
        Character& operator=(const Character &other);
        ~Character();
        // End Orthodox Canonical Form

        Character(std::string const & name);

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
