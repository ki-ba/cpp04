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
# include <iostream>

Animal::Animal() : type("Blob")
{
	std::cout << "[animal] : default constructor called (" << this->type << ")"<< std::endl;
}

Animal::Animal(std::string animalType) : type(animalType)
{
	std::cout << "[animal] : parameter constructor called (" << this->type << ")" << std::endl;
}
Animal::Animal(Animal &other) : type(other.type)
{
	std::cout << "[animal] : copy constructor called (" << this->type << ")" << std::endl;
}
Animal::~Animal()
{
	std::cout << "[animal] : destructor called (" << this->type << ")" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "[animal] : assignment operator called (" << other.type << ")" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "*blob-like sound*" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
