#pragma once
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string);
		~ScavTrap();
		void guardGate();
};