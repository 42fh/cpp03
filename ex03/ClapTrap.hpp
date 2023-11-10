#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		std::string Name;
		unsigned int HitPoints;
		unsigned int EnergyPoints;
		unsigned int AttackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string);
		ClapTrap(std::string, unsigned int, unsigned int, unsigned int);
		ClapTrap(ClapTrap&);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap&);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
