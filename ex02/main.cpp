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
	if (PETA_SIZE > 0)
	{
		Animal *peta[PETA_SIZE];
		for (int i = 0; i < PETA_SIZE; ++i)
		{
			if (PETA_SIZE - i > i)
				peta[i] = new Dog;
			else
				peta[i] = new Cat;
			peta[i]->makeSound();
		}

		for (int i = 0; i < PETA_SIZE; ++i)
			delete peta[i];
	}
	return (0);
}
