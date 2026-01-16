/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:35:49 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/24 18:51:21 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std:: cout << "[dog] : default constructor called (" << this->type << ")" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other.type)
{
	std:: cout << "[dog] : copy constructor called (" << this->type << ")" << std::endl;
}

Dog::~Dog()
{
	std:: cout << "[dog] : destructor called (" << this->type << ")" << std::endl;
}

Dog &Dog::operator=(const Dog& other)
{
	if (this == &other)
		return (*this);
	std:: cout << "[dog] : assignment operator called (" << other.type << ")" << std::endl;
	this->type = other.type;

	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}
