#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <fstream>
#include "Characters.h"
#include "Shop.h"

using namespace std;

int main(){
	ifstream f;
	int health = 60;
	int armor = 0;
	int defense = 40;
	int attack = 30;
	int kills = 0;
	int deaths = 0;
	float money = 0;
	string name;
	characters characters;
	Shop shop;
	int mainMenu = 0;
	int shopSelect = 0;
	int healPotCount;
	int ragePotCount;
	int speedPotCount;
	cout << "Welcome to C++ RPG " << endl;
	cout << "The file for statistic outputs will be CRPG.txt " << endl;
	cout << "Enter a name for your character: " << endl;
	getline(cin, name);
	cout << "You will now be referred to as: " << name << endl;
	cout << "On this epic Journey you will accomplish what many coulnd't" << endl;
	cout << "Defeat the Seven Bosses and be remembered for ever " << endl;
	cout << "Embark on your journey,  " << name << endl;
	while (true){

		

		cout << "Main Menu " << endl;
		cout << "Kills:  " << kills << " Deaths:  " << deaths << endl;
		cout << "Select what you want to do:  " << endl;
		cout << "1. Prologue " << endl;
		cout << "2. Shop " << endl;
		cout << "3. Fight Bandits " << endl;
		cout << "4. Boss 1 - Baas " << endl;
		cout << "5. Boss 2 - Megatron " << endl;
		cout << "6. Boss 3 - Hound " << endl;
		cout << "7. Boss 4 - Zombie Hoard " << endl;
		cout << "8. Boss 5 - T-Rex " << endl;
		cout << "9. Boss 6 - Hades " << endl;
		cout << "10. Final Boss - Zeus  " << endl;
		cin >> mainMenu;
		switch (mainMenu){

		case 1:
			cout << "Your father was known for his skill of martial arts and his brute strength " << endl;
			cout << "He died fighting for your village against Zeus, the God of lightning " << endl;
			cout << "You now seek revenge on Zeus for killing your father and kidnapping your younger siblings " << endl;
			mainMenu - 1;
			break;
		case 2:
			cout << "Welcome to Rons Shop of the Underworld! " << endl;
			cout << "Your balance is: " << money << endl;
			cout << "1. Warriors Shield(+10) Defense " << "Cost: 10 " << endl;
			cout << "2. Hermes Blade(+12) Attack " << "Cost: 22 " << endl;
			cout << "3. Knights armor(+20) Armor  " << "Cost: 40 " << endl;
			cout << "4. Healing Potion(+15) Health " << "Cost: 25 [ONE USE ONLY] " << endl;
			cout << "5. Rage Potion(+15) Attack 3 moves only " << "Cost: 30 [ONE USE ONLY] " << endl;
			cout << "6. Speed Potion, One use, allows battle flee " << "Cost: 20 [ONE USE ONLY] " << endl;
			cout << "7. Ingrams Steel Shield(+20) Defense " << "Cost: 60 " << endl;
			cout << "8. Kryptonite Blade(+50) Attack " << "Cost: 100 " << endl;
			cout << "9. Gold Titanium Alloy Suit(+70) Armor " << "Cost: 200 " << endl;
			cout << "Select an item: " << endl;
			cin >> shopSelect;
			switch (shopSelect){
			case 1:
				if (money >= 10){
					money - 10;
					defense + 10;
						
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 10$ " << endl;
					break;
				}
			case 2:
				if (money >= 22){
					money - 22;
					attack + 12;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 22$ " << endl;
					break;
				}
			case 3:
				if (money >= 40){
					money - 40;
					armor + 20;

					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 40$ " << endl;
					break;
				}
			case 4:
				if (money >= 25){
					money - 25;
					healPotCount + 1;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 25$ " << endl;
					break;
				}
			case 5:
				if (money >= 30){
					money - 30;
					ragePotCount + 1;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 30$ " << endl;
					break;
				}
			case 6:
				if (money >= 20){
					money - 20;
					speedPotCount + 1;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 20$ " << endl;
					break;
				}
			case 7:
				if (money >= 60){
					money - 60;
					defense + 20;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 60$ " << endl;
					break;
				}
			case 8:
				if (money >= 100){
					money - 100;
					attack + 50;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 100$ " << endl;
					break;
				}
			case 9:
				if (money >= 200){
					money - 200;
					armor + 70;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 200$ " << endl;
					break;
				}
			}
			
		case 3:
			cout << endl;
		case 4:
			cout << endl;
		case 5:
			cout << endl;
		case 6:
			cout << endl;
		case 7:
			cout << endl;
		case 8:
			cout << endl;
		case 9:
			cout << endl;
		case 10:
			cout << endl;
		
		}
	}

	return 0;
	system("pause");
}
