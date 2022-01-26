#include "ScavTrap.hpp"
# define MAX_ENERGY 50
# define MAX_HEALTH 100
# define DEFAULT_DAMAGE 20

ScavTrap::ScavTrap () : ClapTrap() {
	std::cout << "Unknown ScavTrap appeared on the battlefield!\n";
	name = "Unknown Scav";
	health = MAX_HEALTH;
	energy = MAX_ENERGY;
	damage = DEFAULT_DAMAGE;
}

ScavTrap::ScavTrap (std::string str) : ClapTrap(str) {
	std::cout << "ScavTrap " << str << " appeared on the battlefield!\n";
	name = str;
	health = MAX_HEALTH;
	energy = MAX_ENERGY;
	damage = DEFAULT_DAMAGE;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy) {
	std::cout << "ScavTrap " << copy.name << " invited his brother!\n";
	name = "Brother of " + copy.name;
	health = copy.health;
	energy = copy.energy;
	damage = copy.damage;
}

ScavTrap::~ScavTrap () {
	std::cout << "ScavTrap " << name << " leave the battlefield.\n";
}

ScavTrap& ScavTrap::operator=(const ScavTrap &obj) {
	std::cout << "ScavTrap " << name << " steal the specifications from ScavTrap " << obj.name << "!\n";
	health = obj.health;
	energy = obj.energy;
	damage = obj.damage;
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "From now on ScavTrap " << name << " in Gate keeper mode.\n";
}

void ScavTrap::attack(std::string const &target) {
	if (energy > 0) {
		std::cout << "ScavTrap " << name << " attack " << target << ", causing " << damage << " points of damage. " << name << " lost 1 EP.\n";
		energy--;
	}
	else
		std::cout << name << " has not enough energy to attack.\n";
}