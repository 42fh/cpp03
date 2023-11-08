#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("DefaultNameFT", 100, 100, 30){std::cout << "FragTrap default constructor called" << std::endl;}
FragTrap::FragTrap(std::string str): ClapTrap(str, 100, 100, 30){std::cout << "FragTrap String constructor called" << std::endl;}
FragTrap::~FragTrap(){std::cout << "FragTrap destructor called" << std::endl;}

void highFivesGuys(void){std::cout << "I request _a positive high five_" << std::endl;}