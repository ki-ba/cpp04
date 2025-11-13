/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbarru <kbarru@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:14:26 by kbarru            #+#    #+#             */
/*   Updated: 2025/10/27 13:37:01 by kbarru           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
public:
	Brain();
	Brain(Brain &other);
	Brain(std::string ideas[100]);
	~Brain();
	Brain &operator=(const Brain &other);
private:
	std::string ideas[100];
};
#endif // BRAIN_HPP
