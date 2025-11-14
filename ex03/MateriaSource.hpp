/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 13:21:25 by kbarru            #+#    #+#             */
/*   Updated: 2025/11/13 13:44:10 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public virtual IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource &operator=(MateriaSource &other);
	MateriaSource(MateriaSource &other);
	AMateria *createMateria(std::string const & type);
	virtual void learnMateria(AMateria*);

private:
	AMateria	*_materias[4];

};
# endif
