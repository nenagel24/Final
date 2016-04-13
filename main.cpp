#include <iostream>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <fstream>
#include "Characters.h"

using namespace std;

int main(){
	ifstream f;
	int health;
	int kills = 0;
	int deaths = 0;
	float money = 0;
	string name;
	characters characters;
	int mainMenu;
	int shopSelect;
	while (true){

		cout << "Welcome to C++ RPG " << endl;
		cout << "The file for statistic outputs will be CRPG.txt " << endl;
		cout << "Enter a name for your character: " << endl;
		getline(cin, name);
		cout << "You will now be referred to as: " << name << endl;
		cout << "On this epic Journey you will accomplish what many coulnd't" << endl;
		cout << "Defeat the Seven Bosses and be remembered for ever " << endl;
		cout << "Everyone must fear the name: " << name << endl;



		cout << "Main Menu " << endl;
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
		case 2:
			cout << "Welcome to Rons Shop of the Underworld! " << endl;
			cout << "Your balance is: " << money << endl;
			cout << "1. Warriors Shield(+10) Defense " << endl;
			cout << "2. Hermes Blade(+12) Attack " << endl;
			cout << "3. Knights armor(+20) Armor  " << endl;
			cout << "4. Healing Potion(+15) Health " << endl;
			cout << "5. Rage Potion(+15) Attack 3 moves only " << endl;
			cout << "6. Speed Potion, One use, allows battle flee " << endl;
			cout << "7. Ingrams Steel Shield(+20) Defense " << endl;
			cout << "8. Kryptonite Blade(+50) Attack " << endl;
			cout << "9. Gold Titanium Alloy Suit(+70) Armor " << endl;
			cout << "Select an item: " << endl;
			cin >> shopSelect;
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
