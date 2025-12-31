/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:47:58 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/27 13:25:14 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CPP
# define CAT_CPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &other);
	~Cat();
	Cat& operator=(const Cat &other);
	void	think() const;
	void	makeSound() const;
private:
	Brain *brain;
};

#endif
