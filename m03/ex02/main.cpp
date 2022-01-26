/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enena <enena@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 08:06:05 by enena             #+#    #+#             */
/*   Updated: 2022/01/23 16:04:40 by enena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	clapTrap("BigPile");
	ScavTrap	scavTrap("YourLeg");

	clapTrap.attack(scavTrap.getName());
	scavTrap.takeDamage(clapTrap.getAttackDamage());
	clapTrap.beRepaired(10);
	
	scavTrap.attack(clapTrap.getName());
	clapTrap.takeDamage(scavTrap.getAttackDamage());
	scavTrap.beRepaired(20);
	scavTrap.guardGate();

	FragTrap	fragTrap("goodGuyButSlowly");

	fragTrap.highFivesGuys();
}