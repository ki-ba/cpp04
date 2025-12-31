/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:50:09 by kbarru            #+#    #+#             */
/*   Updated: 2025/11/06 14:38:10 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : ICharacter(), _name("")
{
	this->_name = "noname";
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
}

Character::Character(Character const &other)
{
	*this = other;
}

Character &Character::operator=(Character const &other)
{
	if (this == &other)
		return (*this);
	this->_name = other.getName();
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i])
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}

	for (int i = 0; i < 4; ++i)
	{
		if (other._inventory[i])
			this->equip(other._inventory[i]->clone());
	}
	
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i] == m)
		{
			std::cout << "materia already equipped" << std::endl;
			return ;
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << "no space left in inventory" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
		return ;
	this->_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || !this->_inventory[idx])
		return ;
	(this->_inventory[idx])->use(target);
}
