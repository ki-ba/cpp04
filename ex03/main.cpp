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
#include "IMateriaSource.hpp"
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
	AMateria* tmp = src->createMateria("ice");
	me->equip(tmp);

	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->equip(tmp); // already known

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	AMateria *materia0 = src->createMateria("ice");
	src->learnMateria(materia0);
	src->learnMateria(materia0);
	src->learnMateria(materia0); // should not learn more than 4 materias
	delete materia0;
	delete src;
	

	// test deep copy
	
	Character barret("barret");
	Character yuffie("yuffie");
	AMateria *heal = new Cure();
	barret.equip(heal);
	yuffie = barret; // yuffie cloned barret's Cure
	barret.unequip(0); // warning : heal is on the ground
	delete heal;

	delete bob;
	delete me;
	return 0;
}
