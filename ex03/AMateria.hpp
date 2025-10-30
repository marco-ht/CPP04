/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:56:56 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/30 18:09:02 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

class AMateria
{
    protected:
        std::string type;
        
    public:
        AMateria(std::string const & type);
        
        // Orthodox Canonical Form
        AMateria();
        AMateria(const AMateria& other);
        AMateria& operator=(const AMateria &other);
        ~AMateria();
        // End Orthodox Canonical Form
        
        std::string const & getType() const; //Returns the materia type
        
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif
