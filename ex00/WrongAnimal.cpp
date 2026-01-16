/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:29:12 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/24 18:37:41 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
# include <iostream>

WrongAnimal::WrongAnimal() : type("Blob")
{
	std::cout << "[WrongAnimal] : default constructor called (" << this->type << ")"<< std::endl;
}

WrongAnimal::WrongAnimal(std::string animalType) : type(animalType)
{
	std::cout << "[WrongAnimal] : parameter constructor called (" << this->type << ")" << std::endl;
}
WrongAnimal::WrongAnimal(WrongAnimal &other) : type(other.type)
{
	std::cout << "[WrongAnimal] : copy constructor called (" << this->type << ")" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] : destructor called (" << this->type << ")" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "[WrongAnimal] : assignment operator called (" << other.type << ")" << std::endl;
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "*wrong sound*" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
