/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:51:37 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/30 20:07:53 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{       
    public:
        // Orthodox Canonical Form
        Ice();
        Ice(const Ice& other);
        Ice& operator=(const Ice &other);
        ~Ice();
        // End Orthodox Canonical Form
        
        std::string const & getType() const; //Returns the materia type
        
        Ice* clone() const = 0;
        void use(ICharacter& target);
};

#endif
