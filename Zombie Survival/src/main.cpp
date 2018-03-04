#include <iostream>
#include "Character.h"


int main()
{
	int health;
	Character hero;													//Creates Hero
	Character zombie;
	std::cout << "Enter your health: ";
	std::cin >> health;

	hero.setHealth(health);
	zombie.setHealth(9);											//initializes Zombie's Health
	zombie.setAmmo(0);
	hero.setAmmo(10);
	if (health > 0) {												//initializes hero's ammo to 10
		std::cout << "Health: " << hero.getHealth() << std::endl;
	}
	std::cout << "Ammo: "   << hero.getAmmo()   << std::endl;
	if (health <= 0) {
		std::cout << "Hero is dead! \n" ;
		//delete hero;
	}
	std::cout << "Zombie Health: " <<zombie.getHealth() << std::endl;

	while (zombie.getHealth() > 0 && hero.getHealth() > 0)
	{
		int action;
		std::cout << "A zombie is attacking! Choose an action. \n";
		std::cout << "1. Attack \n";
		std::cin >> action;
		if (action == 1 && hero.getAmmo() > 0)
		{
			std::cout << "You take aim at the zombie and shoot... \n It Hits! \n";
			hero.setAmmo(hero.getAmmo() - 1);
			zombie.setHealth(zombie.getHealth() - 5);
			std::cout << "Zombie Health is " << zombie.getHealth() << std::endl;
		}

	}
	if (zombie.getHealth() <= 0)
		{
			//delete zombie;
			std::cout << "The trash collector took the zombie away :( \n";
		}

	
	//std::cout << "Hello World!\n";
	std::cin.get();														//Pauses Game 
	system("Pause");
}