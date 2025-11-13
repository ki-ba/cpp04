/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:33:14 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/27 13:54:10 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

#define PETA_SIZE 10

int main(void)
{
	Animal *peta[PETA_SIZE];
	for (int i = 0; i < PETA_SIZE; ++i)
	{
		if (PETA_SIZE - i > i)
		{
			Dog *curr_dog;

			curr_dog = new Dog;
			peta[i] = curr_dog;
			curr_dog->makeSound();
		}
		else
		{
			Cat *curr_cat;

			curr_cat = new Cat;
			peta[i] = curr_cat;
			curr_cat->makeSound();
		}
	}

	for (int i = 0; i < PETA_SIZE; ++i)
		delete peta[i];
	return (0);
}
