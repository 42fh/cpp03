#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string Name;
		int HitPoints;
		int EnergyPoints;
		int AttackDamage;
	public:
		ClapTrap();
		ClapTrap(ClapTrap&);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap&);

		ClapTrap(std::string);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
