/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:12:11 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/29 02:11:29 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
#include "Brain.hpp"

// Orthodox Canonical Form
Brain::Brain()
{
    std::cout << "Brain: default constructor" << std::endl;
}

Brain::Brain(const Brain &other)
{
    int i;
    
    i = 0;
    while (i < N)
    {
        this->setIdeas(i, other.getIdeas(i));
        i++;
    }
    std::cout << "Brain: copy constructor" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
    int i;
    
    i = 0;
    while (i < N)
    {
        this->setIdeas(i, other.getIdeas(i));
        i++;
    }
    std::cout << "Brain: assignment operator" << std::endl;
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain: destructor" << std::endl;
}
// End Orthodox Canonical Form

void    Brain::setIdeas(int i, const std::string str)
{
    if (i >= N)
        return;
    ideas[i] = str;
}

std::string Brain::getIdeas(int i) const
{
    if (i >= N)
        return ("");
    return (ideas[i]);
}
    