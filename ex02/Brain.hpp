/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpierant <marvin@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:52:38 by mpierant          #+#    #+#             */
/*   Updated: 2025/10/29 02:12:19 by mpierant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class   Brain
{
    private:
    static const int N = 100;
    std::string ideas[N];

    public:
    // Orthodox Canonical Form
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain &other);
    ~Brain();
    // End Orthodox Canonical Form

    void        setIdeas(int i, const std::string str);
    std::string getIdeas(int i) const ;
};

#endif
