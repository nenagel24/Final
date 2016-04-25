#pragma once
#include <iostream>
#include <stdlib.h>

class Shop{
private:
	int warriorShield;
	int hermesBlade;
	int knightArmor;
	int healingPotion;
	int ragePotion;
	int speedPotion;
	int ingramsShield;
	int kryptoBlade;
	int goldSuit;
public:
	int getWarriorShield();
	int getHermesBlade();
	int getKnightArmor();
	int getHealingPotion();
	int getRagePotion();
	int getSpeedPotion();
	int getIngramsShield;
	int getKryptoBlade;
	int getGoldSuit;

	int setWarriorShield();
	int setHermesBlade();
	int setKnightArmor();
	int setHealingPotion();
	int setRagePotion();
	int setSpeedPotion();
	int setIngramsShield();
	int setKryptoBlade();
	int setGoldSuit();

};
