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
#include <iostream>

Animal::Animal() : type("Blob")
{
	std::cout << "[animal] default constructor called" << std::endl;
}

Animal::Animal(std::string animalType) : type(animalType)
{
	std::cout << "[animal] parameterized constructor called (" << this->type << ")" << std::endl;
}
Animal::Animal(Animal &other) : type(other.type)
{
	std::cout << "[animal] copy constructor called" << std::endl;
}
Animal::~Animal()
{
	std::cout << "[animal] destructor called (" << this->type << ")" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other)
		this->type = other.type;
	std::cout << "[animal] copy assignment operator called (" << other.type << ")" << std::endl;
	return (*this);
}

void Animal::makeSound(void) const
{
	std::cout << "*blob-like sound*" << std::endl;
}
std::string Animal::getType() const
{
	return (this->type);
}
