/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:07:31 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 02:33:19 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

class Cure : public AMateria
{       
    public:
        // Orthodox Canonical Form
        Cure();
        Cure(const Cure& other);
        Cure& operator=(const Cure &other);
        ~Cure();
        // End Orthodox Canonical Form
        
        Cure* clone() const;
        void use(ICharacter& target);
};

#endif
