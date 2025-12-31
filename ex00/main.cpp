/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:33:14 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/24 18:33:19 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	const Animal* temp;

	i->makeSound(); // will output the cat sound!
	j->makeSound(); // will output the dog sound!
	//
	temp = i;
	i = j;
	j = temp;

	i->makeSound(); // will output the dog sound!
	j->makeSound(); // will output the cat sound!
	meta->makeSound();

	delete i;
	delete j;
	delete meta;

	return (0);
}
