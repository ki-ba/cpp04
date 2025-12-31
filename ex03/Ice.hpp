/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:07:35 by kbarru            #+#    #+#             */
/*   Updated: 2025/11/04 11:49:40 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

class Ice : public virtual AMateria
{
private:
	Ice & operator=(const Ice &other);
	Ice (const std::string &type);

public :
	Ice();
	Ice(const Ice &other);

	~Ice();
	AMateria *clone() const;
	void use(ICharacter &target);
};
