/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:27:31 by kbarru            #+#    #+#             */
/*   Updated: 2025/11/06 14:34:04 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

#include <iostream>
int main()
{
	IMateriaSource* src = new MateriaSource();
	AMateria *ice = new Ice();
	AMateria *cure= new Cure();
	src->learnMateria(ice);
	src->learnMateria(cure);

	delete ice;
	delete cure;
	ICharacter*  me = new Character("me");
	ICharacter* you = me;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << bob->getName() << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);

	you->use(1, *me);
	you->use(2, *me);
	delete bob;
	delete me;
	delete src;
	return 0;
}
