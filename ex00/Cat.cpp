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
}

Cat::Cat(const Cat &other) : Animal(other.type)
{
}

Cat::~Cat()
{
}

Cat &Cat::operator=(const Cat& other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;

	return (*this);
}

void	Cat::makeSound()
{
	std::cout << "meow" << std::endl;
}
