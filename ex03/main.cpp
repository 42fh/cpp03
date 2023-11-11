#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	// ClapTrap c1;
	// ClapTrap c2("CT2");
	// ClapTrap c3(c1);

	// c2.attack("TRT1");
	// c2.takeDamage(1);
	// c2.takeDamage(1000);

	// for (size_t i = 0; i < 15; i++)
	// {
	// 	c1.beRepaired(12);
	// }
	

	// {
	// 	ScavTrap s1;
	// }

	// {
	// 	FragTrap f1;
	// 	f1.highFivesGuys();
	// }

	// {
	// 	FragTrap f2("FragTrap2");
	// 	f2.highFivesGuys();
	// }

	// { DiamondTrap d1; d1.inspect();}

	{ 
		DiamondTrap d2("D2"); 
		d2.inspect();
		d2.attack("TargetofD2");
		d2.whoAmI();
	}


}
