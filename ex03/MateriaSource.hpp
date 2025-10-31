/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 01:04:18 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 03:24:41 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"

class   AMateria;

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *slots[4];
        
    public:
        // Orthodox Canonical Form
        MateriaSource();
        MateriaSource(const MateriaSource& other);
        MateriaSource&  operator=(const MateriaSource &other);
        ~MateriaSource();
        // End Orthodox Canonical Form
        void    learnMateria(AMateria* m);
        AMateria*   createMateria(std::string const & type);
};

#endif
