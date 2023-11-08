#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("DefaultNameFT", 100, 50, 20){std::cout << "FragTrap default constructor called" << std::endl;}
FragTrap::FragTrap(std::string str): ClapTrap(str, 100, 50, 20){std::cout << "FragTrap String constructor called" << std::endl;}
FragTrap::~FragTrap(){std::cout << "FragTrap destructor called" << std::endl;}

void FragTrap::guardGate(){std::cout << "FragTrap is now in Gate keeper mode." << std::endl;}