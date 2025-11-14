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
		delete this->_inventory[i];
}

Character::Character(Character const &other)
{
	*this = other;
}

Character &Character::operator=(Character const &other)
{
	this->_name = other.getName();
	for (int i = 0; i < 4; ++i)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	int i = 0;
	while (i < 4)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			break;
		}
		++i;
	}
	if (i == 4)
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
