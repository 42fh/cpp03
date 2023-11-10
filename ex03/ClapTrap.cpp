#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("DefaultName"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string str) : Name(str), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap String Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string str, unsigned int a1, unsigned int a2, unsigned int a3) : Name(str), HitPoints(a1), EnergyPoints(a2), AttackDamage(a3)
{
	std::cout << "ClapTrap String Int Int Int Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &other) : Name(other.Name), HitPoints(other.HitPoints), EnergyPoints(other.EnergyPoints), AttackDamage(other.AttackDamage) 
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

ClapTrap::~ClapTrap() 
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	return other;
}

void ClapTrap::attack(const std::string &target) 
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints--;
	}
	else
	{
		std::cout << "Error: Not enough EngergyPoints or HitPoints to attack" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints > amount)
	{
		std::cout << "ClapTrap " << Name << " takes " << amount << " damage" << std::endl;
		HitPoints -= amount;
	}
	else
	{
		std::cout << "ClapTrap " << Name << " takes " << HitPoints << " damage" << std::endl;
		HitPoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (EnergyPoints > 0 && HitPoints > 0)
	{
		std::cout << "ClapTrap " << Name << " repaired by " << amount << " points" << std::endl;
		HitPoints += amount;
		EnergyPoints--;
	}
	else
	{
		std::cout << "Error: Not enough EngergyPoints or HitPoints to repaired itself" << std::endl;
	}
}
