#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): Name("DefaultName"), HitPoints(10), EnergyPoints(10), AttackDamage(0) {std::cout << "ClapTrap Default Constructor called" << std::endl;}
ClapTrap::ClapTrap(std::string str): Name(str), HitPoints(10), EnergyPoints(10), AttackDamage(0) {std::cout << "ClapTrap String Constructor called" << std::endl;}

ClapTrap::ClapTrap(ClapTrap& other): Name(other.Name), HitPoints(other.HitPoints), EnergyPoints(other.EnergyPoints), AttackDamage(other.AttackDamage){std::cout << "ClapTrap Copy Constructor called" << std::endl;}
ClapTrap::~ClapTrap(){std::cout << "ClapTrap Destructor called" << std::endl;}
ClapTrap& ClapTrap::operator=(ClapTrap& other){std::cout << "ClapTrap copy assignment operator called" << std::endl;return other;}

void ClapTrap::attack(const std::string& target){std::cout << "ClapTrap " << Name << " attacks " << target << std::endl;}
void ClapTrap::takeDamage(unsigned int amount){std::cout << "ClapTrap " << Name << " takes " << amount << " damage" << std::endl;(void)amount;}
void ClapTrap::beRepaired(unsigned int amount){std::cout << "ClapTrap " << Name << " repaired by " << amount << " points" << std::endl;(void)amount;}


