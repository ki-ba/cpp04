/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:29:11 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/24 18:39:58 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& other);
		WrongAnimal(std::string animalType);
		WrongAnimal(WrongAnimal &other);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& other);

		std::string getType() const;
		void makeSound(void) const;
	protected:
		std::string type;
};

#endif
