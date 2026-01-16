/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:35:49 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/27 13:32:45 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	std::cout << "[dog] default constructor called" << std::endl;
	this->brain = new Brain;
}

Dog::Dog(const Dog &other) : Animal(other.type)
{
	std::cout << "[dog] copy constructor called" << std::endl;
	this->brain = new Brain(*(other.brain));
}

Dog::~Dog()
{
	std::cout << "[dog] destructor called" << std::endl;
	delete this->brain;
}

Dog &Dog::operator=(const Dog& other)
{
	std::cout << "[dog] copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->type = other.type;

	return (*this);
}

void Dog::think() const
{
	std::cout << "i think, therefore I am. " << this->brain << std::endl;
}
void	Dog::makeSound() const
{
	std::cout << "woof" << std::endl;
}
