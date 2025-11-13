/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:59:33 by kbarru            #+#    #+#             */
/*   Updated: 2025/11/04 11:06:13 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
class Cure : public virtual AMateria
{
public:
	Cure();
	Cure(Cure const &other);
	~Cure();
	Cure &operator=(const Cure &other);
	void use(ICharacter &target);
	AMateria* clone() const;
};

#endif
