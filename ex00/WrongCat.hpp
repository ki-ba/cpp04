/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:47:58 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/24 18:52:01 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CPP
# define WRONGCAT_CPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
  WrongCat();
  WrongCat(const WrongCat &other);
  ~WrongCat();
  WrongCat &operator=(const WrongCat &other);
  void makeSound(void) const ;
};

#endif
