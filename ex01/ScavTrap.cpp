#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("DefaultNameST", 100, 50, 20){std::cout << "ScavTrap default constructor called" << std::endl;}
ScavTrap::ScavTrap(std::string str): ClapTrap(str, 100, 50, 20){std::cout << "ScavTrap String constructor called" << std::endl;}
ScavTrap::~ScavTrap(){std::cout << "ScavTrap destructor called" << std::endl;}

void ScavTrap::guardGate(){std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;}