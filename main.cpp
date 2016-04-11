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
		cout << "Select what you want to do:  ";
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
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		
		}
	}
	




	return 0;
	system("pause");
}
