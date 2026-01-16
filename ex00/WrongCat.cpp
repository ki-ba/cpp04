/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:47:04 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/24 18:50:53 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std:: cout << "[WrongCat] : default constructor called (" << this->type << ")" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other.type)
{
	std:: cout << "[WrongCat] : copy constructor called (" << this->type << ")" << std::endl;
}

WrongCat::~WrongCat()
{
	std:: cout << "[WrongCat] : destructor called (" << this->type << ")" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat& other)
{
	if (this == &other)
		return (*this);
	std:: cout << "[WrongCat] : assignment operator called (" << other.type << ")" << std::endl;
	this->type = other.type;

	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "right cat sound (should not be heard)" << std::endl;
}
