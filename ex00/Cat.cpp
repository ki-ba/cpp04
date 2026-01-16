/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:47:04 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/24 18:50:53 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std:: cout << "[cat] : default constructor called (" << this->type << ")" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other.type)
{
	std:: cout << "[cat] : copy constructor called (" << this->type << ")" << std::endl;
}

Cat::~Cat()
{
	std:: cout << "[cat] : destructor called (" << this->type << ")" << std::endl;
}

Cat &Cat::operator=(const Cat& other)
{
	if (this == &other)
		return (*this);
	std:: cout << "[cat] : assignment operator called (" << other.type << ")" << std::endl;
	this->type = other.type;

	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "meow" << std::endl;
}
