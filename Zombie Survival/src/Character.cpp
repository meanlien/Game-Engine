#include "Character.h"
#include <iostream>


//HEALTH
int Character::getHealth() {
	return health;
}
//use setHealth to set a health value for any character created
void Character::setHealth(int a) {
	if (a >= 0){
		health = a;
	}
	else {
		health = 0;
		std::cout << "Character dead! \n";
	}

}

//AMMO
int Character::getAmmo() {
	return ammo;
}

void Character::setAmmo(int a) {
	ammo = a;
}