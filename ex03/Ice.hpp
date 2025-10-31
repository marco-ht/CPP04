/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:51:37 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 02:33:10 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

class Ice : public AMateria
{       
    public:
        // Orthodox Canonical Form
        Ice();
        Ice(const Ice& other);
        Ice& operator=(const Ice &other);
        ~Ice();
        // End Orthodox Canonical Form
        
        Ice* clone() const;
        void use(ICharacter& target);
};

#endif
