/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:21:25 by kbarru            #+#    #+#             */
/*   Updated: 2025/11/13 13:43:23 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		_materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		delete (this->_materias[i]);
}

MateriaSource::MateriaSource(MateriaSource &other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(MateriaSource &other)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materias[i])
			delete (this->_materias[i]);
		if (other._materias[i])
			this->_materias[i] = other._materias[i];
		else
			this->_materias[i] = NULL;
	}
	return (*this);
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (type == this->_materias[i]->getType())
			return (this->_materias[i]->clone());
	}
	std::cout << "Materia not created : no such type known" << std::endl;
	return (NULL);
}

void MateriaSource::learnMateria(AMateria* materia)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_materias[i] == materia)
		{
			std::cout << "Materia not learned : already known" << std::endl;
			return ;
		}
	}

	for (int i = 0; i < 4; ++i)
	{
		if (!this->_materias[i])
		{
			_materias[i] = materia->clone();
			return ;
		}
	}
	std::cout << "Materia not learned : no empty spot left" << std::endl;
}
