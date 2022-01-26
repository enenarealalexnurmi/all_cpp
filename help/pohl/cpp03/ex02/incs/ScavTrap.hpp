/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pohl <pohl@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:55:51 by pohl              #+#    #+#             */
/*   Updated: 2021/10/05 12:20:37 by pohl             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:

	ScavTrap( const std::string name );
	ScavTrap( const ScavTrap &src );
	~ScavTrap( void );

	ScavTrap	&operator=( const ScavTrap &other );

	void	attack( const std::string &target );
	void	guardGate( void );

private:

	ScavTrap( void );

};

#endif
