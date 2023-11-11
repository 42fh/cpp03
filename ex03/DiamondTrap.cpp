#include "DiamondTrap.hpp"

void DiamondTrap::whoAmI()
{
	std::cout 
		<< "whoAmI: " 
		<< "ClapTrapName: " << ClapTrap::Name << " "
		<< "DiamonTrapName: " << Name << std::endl;
}

DiamondTrap::DiamondTrap(): ClapTrap("DefaultDiamonTrapName" "_claptrap_name"), Name("DefaultDiamonTrapName"){
std::cout
	<< "DiamondTrap Name: " << Name  << std::endl
	<< "Default constructor DiamondTrap "
	<< "ClapTrap Name: " << ClapTrap::Name
	<< " HP " << FragTrap::HitPoints << ", EP " << EnergyPoints << ", AD " << AttackDamage
	<< std::endl;}

DiamondTrap::DiamondTrap(std::string str): ClapTrap(str + "_claptrap_name", 100, 50, 30), Name(str)
{
std::cout
	<< "String constructor DiamondTrap: "
	<< "DiamondTrap Name: " << Name  << std::endl
	<< "ClapTrap Name: " << ClapTrap::Name
	<< " HP " << FragTrap::HitPoints << ", EP " << EnergyPoints << ", AD " << AttackDamage
	<< std::endl;
}

void DiamondTrap::inspect()
{
	std::cout << "Inspect: ";
	this->guardGate();
	this->highFivesGuys();
	std::cout << "Called guardGate and highFivesGuys " << std::endl
		<< "HitPoints: " << HitPoints << " "
		<< "EnergyPoints: " << EnergyPoints << " "
		<< "AttackDamage: " << AttackDamage << std::endl;
}