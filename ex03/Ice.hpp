/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:51:37 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 03:36:15 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

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
        
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif
