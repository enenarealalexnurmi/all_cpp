/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 20:06:40 by enena             #+#    #+#             */
/*   Updated: 2022/01/25 19:57:20 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
private:
	Brain*	_brain;
public:
	Dog(void);
	Dog(const Dog& init);
	~Dog(void);

	Dog&	operator=(const Dog& other);

	void	makeSound(void) const;
	void	whatInYourMind(unsigned int deep);
};


#endif