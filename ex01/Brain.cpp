/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:17:05 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/27 13:54:12 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "[brain] default constructor called" << std::endl;
}

Brain::Brain(Brain &other)
{
	std::cout << "[brain] copy constructor called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
}

Brain::~Brain()
{
	std::cout << "[brain] destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "[brain] copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
	return (*this);
}
