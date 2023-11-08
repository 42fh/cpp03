#include "ClapTrap.hpp"

int main()
{
	ClapTrap c1;
	ClapTrap c2("CT2");
	ClapTrap c3(c1);

	c2.attack("TRT1");
	c2.takeDamage(1);
	c2.takeDamage(1000);

	for (size_t i = 0; i < 15; i++)
	{
		c1.beRepaired(12);
	}
	

}
