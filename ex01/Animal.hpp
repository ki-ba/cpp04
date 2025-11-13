/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:29:11 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/27 13:49:15 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
	public:
		Animal();
		Animal(const Animal& other);
		Animal(std::string animalType);
		Animal(Animal &other);
		virtual ~Animal();
		Animal& operator=(const Animal& other);

		std::string getType() const;
	protected:
		std::string type;
};

#endif
