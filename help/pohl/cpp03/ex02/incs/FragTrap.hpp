/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 12:26:39 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 12:35:11 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

public:

	FragTrap( const std::string &name );
	FragTrap( const FragTrap &src );
	~FragTrap( void );

	FragTrap	&operator=( const FragTrap &other );

	void		highFivesGuys( void );

private:

	FragTrap( void );

};

#endif
