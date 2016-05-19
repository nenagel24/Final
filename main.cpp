#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <fstream>
#include "Characters.h"
#include "Shop.h"

using namespace std;

int main(){
	//Strings
	string name;
	string zeus = "Zeus";
	string bandit = "Bandits";
	string baas = "Baas";
	string megatron = "Megatron";
	string hound = "Richtofen";
	string zombieHoard = "Zombies";
	string trex = "T-Rex";
	string hades = "Hades";

	//User Variables
	int health = 60;
	int armor = 0;
	int defense = 40;
	int attack = 30;
	int kills = 0;
	int deaths = 0;
	float money = 100;
	int blockCount = 0;
	bool ragePotionActive = false;

	//Class Stuff
	characters characters;
	Shop shop;
    ofstream out;

	//Menus
	int mainMenu = 0;
	int shopSelect = 0;
	int battleMenu = 0;

	//Shop Stuff
	int healPotCount = 0;
	int ragePotCount = 0;
	int speedPotCount = 0;
	int rageTurnCount = 0;
	int itemsBought = 0;

	//Enemy Variables
	bool zeusDefeated = false;
	int enemyHealth;
	int enemyDefense;
	int enemyArmor;
	int enemyAttack;

	cout << "Welcome to C++ RPG " << endl;
	cout << "The file for statistic outputs will be CRPG.txt " << endl;
	cout << "Enter a name for your character: " << endl;
	getline(cin, name);
	cout << "You will now be referred to as: " << name << endl;
	cout << "On this epic Journey you will accomplish what many coulnd't" << endl;
	cout << "Defeat the Seven Bosses and be remembered for ever " << endl;
	cout << "Embark on your journey,  " << endl;
	cout << endl;
	while (true){



		cout << "Main Menu " << endl;
		cout << "Kills:  " << kills << " Deaths:  " << deaths << " Balance: " << money << endl;
		cout << "Select what you want to do:  " << endl;
		cout << "1.  Prologue " << endl;
		cout << "2.  Shop " << endl;
		cout << "3.  Fight Bandits " << endl;
		cout << "4.  Boss 1 - Baas " << endl;
		cout << "5.  Boss 2 - Megatron " << endl;
		cout << "6.  Boss 3 - Hound " << endl;
		cout << "7.  Boss 4 - Zombie Hoard " << endl;
		cout << "8.  Boss 5 - T-Rex " << endl;
		cout << "9.  Boss 6 - Hades " << endl;
		cout << "10. Final Boss - Zeus  " << endl;
		cout << "11. Your stats " << endl;
		cout << "12. Output data to CRPG.txt " << endl;
		cin >> mainMenu;
		switch (mainMenu){

		case 1:
			cout << "Your father was known for his skill of martial arts and his brute strength " << endl;
			cout << "He died fighting for your village against Zeus, the God of lightning " << endl;
			cout << "You now seek revenge on Zeus for killing your father and kidnapping your younger siblings " << endl;
			mainMenu = 0;
			break;
		case 2:
			mainMenu = 0;
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
					money -= 10;
					defense += 10;
					shopSelect = 0;
					itemsBought + 1;
					break;
					
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 10$ " << endl;
					break;
				}
			case 2:
				if (money >= 22){
					money -= 22;
					attack += 12;
					itemsBought + 1;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 22$ " << endl;
					break;
				}
			case 3:
				if (money >= 40){
					money -= 40;
					armor += 20;
					itemsBought + 1;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 40$ " << endl;
					break;
				}
			case 4:
				if (money >= 25){
					money -= 25;
					healPotCount += 1;
					itemsBought + 1;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 25$ " << endl;
					break;
				}
			case 5:
				if (money >= 30){
					money -= 30;
					ragePotCount += 1;
					itemsBought + 1;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 30$ " << endl;
					break;
				}
			case 6:
				if (money >= 20){
					money -= 20;
					speedPotCount += 1;
					itemsBought + 1;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 20$ " << endl;
					break;
				}
			case 7:
				if (money >= 60){
					money -= 60;
					defense += 20;
					itemsBought + 1;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 60$ " << endl;
					break;
				}
			case 8:
				if (money >= 100){
					money -= 100;
					attack += 50;
					itemsBought + 1;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 100$ " << endl;
					break;
				}
			case 9:
				if (money >= 200){
					money -= 200;
					armor += 70;
					itemsBought + 1;
					break;
				}
				else{
					cout << "Not enough money, your balance is: " << money << " And you need 200$ " << endl;
					break;
				}
			}

		case 3:
			cout << "You are fighting " << bandit << " ! " << endl;
			enemyAttack = 6;
			enemyHealth = 44;
			enemyDefense = 0;
			mainMenu = 0;
			cout << "Battle Menu " << endl;
			cout << "1. Attack " << endl;
			cout << "2. Block " << endl;
			cout << "3. Use Heal Potion " << endl;
			cout << "4. Use Rage Potion " << endl;
			cout << "5. Run away(Requires Speed Pot) " << endl;
			cin >> battleMenu;
			switch (battleMenu){
			case 1:
				if (ragePotionActive = true){
					attack + 15;
					enemyHealth - attack;
					rageTurnCount + 1;
				}
				if (enemyHealth <= 0){
					cout << "You have defeated the " << bandit << endl;
					cout << "You have earned 3 money " << endl;
					money + 3;
					kills + 1;
					break;
				}
				if (health <= 0){
					cout << "You have died.... " << endl;
					deaths + 1;
					break;
				}
				if (rageTurnCount > 3){
					cout << "Your rage potion is used and your attack has been turned to normal " << endl;
					attack - 15;
					enemyHealth - attack;
					
				}
				else{
					cout << "You have attacked and hit the enemy for " << attack << " Damage! " << endl;

				}
			case 2:
				if (blockCount = 1){
					defense / 4;
					enemyAttack - defense;
					cout << "You have been hit for " << enemyAttack << " Damage " << endl;

				}
			case 3:
				if (healPotCount >= 1){
					cout << "You have been healed! " << endl;
					health + 15;
				}
				else{
					cout << "No health pots available...  " << endl;
				}
			case 4:
				if (ragePotCount >= 1){
					cout << "Rage potion activated! " << endl;
					ragePotionActive = true;
				}
				else{
					cout << "No rage potions available " << endl;
				}
			case 5:
				if (speedPotCount >= 1){
					cout << "You have fled battle " << endl;
					break;
				}
				else{
					cout << "Not speed Pots available, fight " << endl;
				}

			}

			break;
		case 4:
			cout << "You are fighting " << baas << " Zeus's Number One thug " << endl;
			mainMenu = 0;
			enemyAttack = 14;
			enemyHealth = 62;
			enemyDefense = 0;
			cout << "Battle Menu " << endl;
			cout << "1. Attack " << endl;
			cout << "2. Block " << endl;
			cout << "3. Use Heal Potion " << endl;
			cout << "4. Use Rage Potion " << endl;
			cout << "5. Run away(Requires Speed Pot) " << endl;
			cin >> battleMenu;
			switch (battleMenu){
			case 1:
				if (ragePotionActive = true){
					attack + 15;
					
					rageTurnCount + 1;
				}
				if (rageTurnCount > 3){
					cout << "Your rage potion is used and your attack has been turned to normal " << endl;
					attack - 15;
					enemyHealth - attack;

				}
				if (enemyHealth <= 0){
					cout << "You have defeated " << baas << endl;
					cout << "You have earned 8 money " << endl;
					money + 8;
					kills + 1;
					break;
				}
				if (health <= 0){
					cout << "You have died.... " << endl;
					deaths + 1;
					break;
				}
				else{
					cout << "You have attacked and hit the enemy for " << attack << " Damage! " << endl;

				}
			case 2:
				if (blockCount = 1){
					defense / 4;
					enemyAttack - defense;
					cout << "You have been hit for " << enemyAttack << " Damage " << endl;

				}
			case 3:
				if (healPotCount >= 1){
					cout << "You have been healed! " << endl;
					health + 15;
				}
				else{
					cout << "No health pots available...  " << endl;
				}
			case 4:
				if (ragePotCount >= 1){
					cout << "Rage potion activated! " << endl;
					ragePotionActive = true;
				}
				else{
					cout << "No rage potions available " << endl;
				}
			case 5:
				if (speedPotCount >= 1){
					cout << "You have fled battle " << endl;
					break;
				}
				else{
					cout << "Not speed Pots available, fight " << endl;
				}

			}
			break;

		case 5:
			cout << "You are fighting " << megatron << " He knew your father and gave his location to Zeus " << endl;
			mainMenu = 0;
			enemyAttack = 40;
			enemyHealth = 63;
			enemyDefense = 10;
			cout << "Battle Menu " << endl;
			cout << "1. Attack " << endl;
			cout << "2. Block " << endl;
			cout << "3. Use Heal Potion " << endl;
			cout << "4. Use Rage Potion " << endl;
			cout << "5. Run away(Requires Speed Pot) " << endl;
			cin >> battleMenu;
			switch (battleMenu){
			case 1:
				if (ragePotionActive = true){
					attack + 15;

					rageTurnCount + 1;
				}
				if (rageTurnCount > 3){
					cout << "Your rage potion is used and your attack has been turned to normal " << endl;
					attack - 15;
					enemyHealth - attack;

				}
				if (enemyHealth <= 0){
					cout << "You have defeated " << megatron << endl;
					cout << "You have earned 12 money " << endl;
					money + 12;
					kills + 1;
					break;
				}
				if (health <= 0){
					cout << "You have died.... " << endl;
					deaths + 1;
					break;
				}
				else{
					cout << "You have attacked and hit the enemy for " << attack << " Damage! " << endl;

				}
			case 2:
				if (blockCount = 1){
					defense / 4;
					enemyAttack - defense;
					cout << "You have been hit for " << enemyAttack << " Damage " << endl;

				}
			case 3:
				if (healPotCount >= 1){
					cout << "You have been healed! " << endl;
					health + 15;
				}
				else{
					cout << "No health pots available...  " << endl;
				}
			case 4:
				if (ragePotCount >= 1){
					cout << "Rage potion activated! " << endl;
					ragePotionActive = true;
				}
				else{
					cout << "No rage potions available " << endl;
				}
			case 5:
				if (speedPotCount >= 1){
					cout << "You have fled battle " << endl;
					break;
				}
				else{
					cout << "Not speed Pots available, fight " << endl;
				}

			}
			break;
		case 6:
			cout << "You are fighting " << hound << " the dog from the underworld " << endl;
			mainMenu = 0;
			enemyAttack = 50;
			enemyHealth = 80;
			enemyDefense = 0;
			cout << "Battle Menu " << endl;
			cout << "1. Attack " << endl;
			cout << "2. Block " << endl;
			cout << "3. Use Heal Potion " << endl;
			cout << "4. Use Rage Potion " << endl;
			cout << "5. Run away(Requires Speed Pot) " << endl;
			cin >> battleMenu;
			switch (battleMenu){
			case 1:
				if (ragePotionActive = true){
					attack + 15;

					rageTurnCount + 1;
				}
				if (rageTurnCount > 3){
					cout << "Your rage potion is used and your attack has been turned to normal " << endl;
					attack - 15;
					enemyHealth - attack;

				}
				if (health <= 0){
					cout << "You have died.... " << endl;
					deaths + 1;
					break;
				}
				if (enemyHealth <= 0){
					cout << "You have defeated the " << hound << endl;
					cout << "You have earned 17 money " << endl;
					money + 17;
					kills + 1;
					break;
				}
				else{
					cout << "You have attacked and hit the enemy for " << attack << " Damage! " << endl;

				}
			case 2:
				if (blockCount = 1){
					defense / 4;
					enemyAttack - defense;
					cout << "You have been hit for " << enemyAttack << " Damage " << endl;

				}
			case 3:
				if (healPotCount >= 1){
					cout << "You have been healed! " << endl;
					health + 15;
				}
				else{
					cout << "No health pots available...  " << endl;
				}
			case 4:
				if (ragePotCount >= 1){
					cout << "Rage potion activated! " << endl;
					ragePotionActive = true;
				}
				else{
					cout << "No rage potions available " << endl;
				}
			case 5:
				if (speedPotCount >= 1){
					cout << "You have fled battle " << endl;
					break;
				}
				else{
					cout << "Not speed Pots available, fight " << endl;
				}

			}
			break;
		case 7:
			cout << " You are fighting " << zombieHoard << " Zeus's army sent to kill you " << endl;
			mainMenu = 0;
			enemyAttack = 20;
			enemyHealth = 234;
			enemyDefense = 5;
			cout << "Battle Menu " << endl;
			cout << "1. Attack " << endl;
			cout << "2. Block " << endl;
			cout << "3. Use Heal Potion " << endl;
			cout << "4. Use Rage Potion " << endl;
			cout << "5. Run away(Requires Speed Pot) " << endl;
			cin >> battleMenu;
			switch (battleMenu){
			case 1:
				if (ragePotionActive = true){
					attack + 15;

					rageTurnCount + 1;
				}
				if (rageTurnCount > 3){
					cout << "Your rage potion is used and your attack has been turned to normal " << endl;
					attack - 15;
					enemyHealth - attack;

				}
				if (enemyHealth <= 0){
					cout << "You have defeated the " << zombieHoard << endl;
					cout << "You have earned 25 money " << endl;
					money + 25;
					kills + 1;
					break;
				}
				if (health <= 0){
					cout << "You have died.... " << endl;
					deaths + 1;
					break;
				}
				else{
					cout << "You have attacked and hit the enemy for " << attack << " Damage! " << endl;

				}
			case 2:
				if (blockCount = 1){
					defense / 4;
					enemyAttack - defense;
					cout << "You have been hit for " << enemyAttack << " Damage " << endl;

				}
			case 3:
				if (healPotCount >= 1){
					cout << "You have been healed! " << endl;
					health + 15;
				}
				else{
					cout << "No health pots available...  " << endl;
				}
			case 4:
				if (ragePotCount >= 1){
					cout << "Rage potion activated! " << endl;
					ragePotionActive = true;
				}
				else{
					cout << "No rage potions available " << endl;
				}
			case 5:
				if (speedPotCount >= 1){
					cout << "You have fled battle " << endl;
					break;
				}
				else{
					cout << "Not speed Pots available, fight " << endl;
				}

			}
			break;
		case 8:
			cout << "You are fighting " << trex << " Zeus's guard " << endl;
			mainMenu = 0;
			enemyAttack = 87;
			enemyHealth = 152;
			enemyDefense = 34;
			cout << "Battle Menu " << endl;
			cout << "1. Attack " << endl;
			cout << "2. Block " << endl;
			cout << "3. Use Heal Potion " << endl;
			cout << "4. Use Rage Potion " << endl;
			cout << "5. Run away(Requires Speed Pot) " << endl;
			cin >> battleMenu;
			switch (battleMenu){
			case 1:
				if (ragePotionActive = true){
					attack + 15;

					rageTurnCount + 1;
				}
				if (rageTurnCount > 3){
					cout << "Your rage potion is used and your attack has been turned to normal " << endl;
					attack - 15;
					enemyHealth - attack;

				}
				if (enemyHealth <= 0){
					cout << "You have defeated the " << trex << endl;
					cout << "You have earned 30 money " << endl;
					money + 30;
					kills + 1;
					break;
				}
				if (health <= 0){
					cout << "You have died.... " << endl;
					deaths + 1;
					break;
				}
				else{
					cout << "You have attacked and hit the enemy for " << attack << " Damage! " << endl;

				}
			case 2:
				if (blockCount = 1){
					defense / 4;
					enemyAttack - defense;
					cout << "You have been hit for " << enemyAttack << " Damage " << endl;

				}
			case 3:
				if (healPotCount >= 1){
					cout << "You have been healed! " << endl;
					health + 15;
				}
				else{
					cout << "No health pots available...  " << endl;
				}
			case 4:
				if (ragePotCount >= 1){
					cout << "Rage potion activated! " << endl;
					ragePotionActive = true;
				}
				else{
					cout << "No rage potions available " << endl;
				}
			case 5:
				if (speedPotCount >= 1){
					cout << "You have fled battle " << endl;
					break;
				}
				else{
					cout << "Not speed Pots available, fight " << endl;
				}

			}
			break;
		case 9:
			cout << "You are fighting " << hades << " Zeus's brother " << endl;
			mainMenu = 0;
			enemyAttack = 102;
			enemyHealth = 180;
			enemyDefense = 50;
			cout << "Battle Menu " << endl;
			cout << "1. Attack " << endl;
			cout << "2. Block " << endl;
			cout << "3. Use Heal Potion " << endl;
			cout << "4. Use Rage Potion " << endl;
			cout << "5. Run away(Requires Speed Pot) " << endl;
			cin >> battleMenu;
			switch (battleMenu){
			case 1:
				if (ragePotionActive = true){
					attack + 15;

					rageTurnCount + 1;
				}
				if (rageTurnCount > 3){
					cout << "Your rage potion is used and your attack has been turned to normal " << endl;
					attack - 15;
					enemyHealth - attack;

				}
				if (enemyHealth <= 0){
					cout << "You have defeated " << hades << endl;
					cout << "Defeating Zeus will be no easy task and Zeus's power cannont be underestimated... " << endl;
					cout << "You have earned 50 money " << endl;
					money + 50;
					kills + 1;
					break;
				}
				if (health <= 0){
					cout << "You have died.... " << endl;
					deaths + 1;
					break;
				}
				else{
					cout << "You have attacked and hit the enemy for " << attack << " Damage! " << endl;

				}
			case 2:
				if (blockCount = 1){
					defense / 4;
					enemyAttack - defense;
					cout << "You have been hit for " << enemyAttack << " Damage " << endl;

				}
			case 3:
				if (healPotCount >= 1){
					cout << "You have been healed! " << endl;
					health + 15;
				}
				else{
					cout << "No health pots available...  " << endl;
				}
			case 4:
				if (ragePotCount >= 1){
					cout << "Rage potion activated! " << endl;
					ragePotionActive = true;
				}
				else{
					cout << "No rage potions available " << endl;
				}
			case 5:
				if (speedPotCount >= 1){
					cout << "You have fled battle " << endl;
					break;
				}
				else{
					cout << "Not speed Pots available, fight " << endl;
				}

			}
			break;
		case 10:
			mainMenu = 0;
			enemyAttack = 122;
			enemyHealth = 200;
			enemyDefense = 70;
			cout << "You are battling " << zeus << "The ruler of the skies and murderer of your father... " << endl;

			cout << zeus << ": So, one wishes to die just like his father " << endl;
			cout << name << ": My fathers death will be avenged " << endl;
			cout << zeus << ": We will see boy " << endl;
			cout << "Battle Menu " << endl;
			cout << "1. Attack " << endl;
			cout << "2. Block " << endl;
			cout << "3. Use Heal Potion " << endl;
			cout << "4. Use Rage Potion " << endl;
			cout << "5. Run away(Requires Speed Pot) " << endl;
			cin >> battleMenu;
			switch (battleMenu){
			case 1:
				if (ragePotionActive = true){
					attack + 15;

					rageTurnCount + 1;
				}
				if (rageTurnCount > 3){
					cout << "Your rage potion is used and your attack has been turned to normal " << endl;
					attack - 15;
					enemyHealth - attack;

				}
				if (enemyHealth <= 0){
					cout << "You have defeated the almighty " << zeus << endl;
					cout << "You have earned infinite wealth, and control the world " << endl;
					money + 1000000000000;
					kills + 1;
					break;
				}
				if (health <= 0){
					cout << "You have died.... " << endl;
					deaths + 1;
					break;
				}
				else{
					cout << "You have attacked and hit the enemy for " << attack << " Damage! " << endl;

				}
			case 2:
				if (blockCount = 1){
					defense / 4;
					enemyAttack - defense;
					cout << "You have been hit for " << enemyAttack << " Damage " << endl;

				}
			case 3:
				if (healPotCount >= 1){
					cout << "You have been healed! " << endl;
					health + 15;
				}
				else{
					cout << "No health pots available...  " << endl;
				}
			case 4:
				if (ragePotCount >= 1){
					cout << "Rage potion activated! " << endl;
					ragePotionActive = true;
				}
				else{
					cout << "No rage potions available " << endl;
				}
			case 5:
				if (speedPotCount >= 1){
					cout << "You have fled battle " << endl;
					break;
				}
				else{
					cout << "Not speed Pots available, fight " << endl;
				}

			}
			break;
		case 11:
			cout << "Attack: " << attack << endl;
			cout << "Defense: " << defense << endl;
			cout << "Armor: " << armor << endl;
			cout << "Speed Pot Count: " << speedPotCount << endl;
			cout << "Rage Pot Count: " << ragePotCount << endl;
			cout << "Heal Pot Count: " << healPotCount << endl;
			cout << "Kills: " << kills << endl;
			cout << "Deaths: " << deaths << endl;
			cout << "Money: " << money << endl;

		case 12:
			cout << "Check the file CRPG.txt for stats " << endl;
			out.open("CRPG.txt", ios::out | ios::trunc);
			out << "Attack: " << attack << endl;
			out << "Defense: " << defense << endl;
			out << "Armor: " << armor << endl;
			out << "Speed Pot Count: " << speedPotCount << endl;
			out << "Rage Pot Count: " << ragePotCount << endl;
			out << "Heal Pot Count: " << healPotCount << endl;
			out << "Kills: " << kills << endl;
			out << "Deaths: " << deaths << endl;
			out << "Money: " << money << endl;
			if (zeusDefeated = true){
				out << "You have defeated the almighty Zeus, Making you the best warrior in history " << endl;

			}
			out.close();
		}
		

	}

	return 0;
	system("pause");
}
