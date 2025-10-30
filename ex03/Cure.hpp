/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:07:31 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/30 20:10:43 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cure_HPP
# define Cure_HPP

#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{       
    public:
        // Orthodox Canonical Form
        Cure();
        Cure(const Cure& other);
        Cure& operator=(const Cure &other);
        ~Cure();
        // End Orthodox Canonical Form
        
        std::string const & getType() const; //Returns the materia type
        
        Cure* clone() const = 0;
        void use(ICharacter& target);
};

#endif
