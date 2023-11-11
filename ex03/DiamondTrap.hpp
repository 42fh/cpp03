#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: ScavTrap, FragTrap
{
	private:
		std::string Name;
		using FragTrap::HitPoints;
		using ScavTrap::EnergyPoints;
		using FragTrap::AttackDamage;
	public:
		DiamondTrap();
		DiamondTrap(std::string);

		using ScavTrap::attack;

		void whoAmI();

		void inspect();
};