#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: ScavTrap, FragTrap
{
	private:
		std::string Name;
	public:
		void whoAmI();
};