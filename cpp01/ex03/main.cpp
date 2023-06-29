#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
	    Weapon  club = Weapon("crude spiked club");
	    HumanA bob("Bob", club);
	    bob.attack();
	    club.setType("some other type of club");
		std::cout << club.getType() << '\n';
	    bob.attack();
	}
	/*{	
		Weapon  club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Some other type of club");
		jim.attack();
	}*/
	return (0);
}