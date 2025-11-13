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
#include "ICharacter.hpp"
#include "AMateria.hpp"

Character::Character() : ICharacter()
{
	this->_name = "noname";
}

Character::Character(std::string name) : ICharacter()
{
	this->_name = name;
}

Character::~Character()
{

}

std::string const & Character::getName() const
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
	std::cout << "no space left in inventory" << std::endl;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << "incorrect index" << std::endl;
	if (!this->_inventory[idx])
		std::cout << "no materia in this spot" << std::endl;
	this->_inventory[idx] = NULL; // beware of memory leaks
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << "incorrect index" << std::endl;
	if (!this->_inventory[idx])
		std::cout << "no materia in this spot" << std::endl;
	(this->_inventory[idx])->use(target);
}
