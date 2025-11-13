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

Brain::Brain()
{
}

Brain::Brain(Brain &other)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
}

Brain::~Brain()
{
}

Brain &Brain::operator=(const Brain &other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
	return (*this);
	
}

