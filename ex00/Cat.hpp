/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:47:58 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/24 18:52:01 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CPP
# define CAT_CPP

# include "Animal.hpp"

class Cat : public Animal {
public:
  Cat();
  Cat(const Cat &other);
  ~Cat();
  Cat &operator=(const Cat &other);
  void makeSound(void) const ;
};

#endif
