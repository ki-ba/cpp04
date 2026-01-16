/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:47:04 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/27 13:32:01 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("Cat")
{
	std::cout << "[cat] default constructor called" << std::endl;
	this->brain = new Brain;
}

Cat::Cat(const Cat &other) : Animal(other.type)
{
	std::cout << "[cat] copy constructor called" << std::endl;
	this->brain = new Brain(*(other.brain));
}

Cat::~Cat()
{
	std::cout << "[cat] destructor called" << std::endl;
	delete this->brain;
}

Cat &Cat::operator=(const Cat& other)
{
	std::cout << "[cat] copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;

	return (*this);
}

void Cat::think() const
{
	std::cout << "i think, therefore I am. " << this->brain << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
