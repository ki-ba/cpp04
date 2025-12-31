/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:29:12 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/24 18:37:41 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	
}

Animal::Animal(std::string animalType) : type(animalType)
{
}

Animal::Animal(Animal &other) : type(other.type)
{
}

Animal::~Animal()
{
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}
