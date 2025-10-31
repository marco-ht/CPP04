/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 01:01:40 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/31 03:21:12 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <string>

class   AMateria;

class   IMateriaSource
{
    public:
    virtual ~IMateriaSource() {}
    virtual void    learnMateria(AMateria*) = 0;
    virtual AMateria*   createMateria(std::string const & type) = 0;
};

#endif
