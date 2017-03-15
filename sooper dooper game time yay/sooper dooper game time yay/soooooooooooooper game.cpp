#include <iostream>
#include <string>
#include <windows.h>
#include <string>
using namespace std;
int main() {
	int room = 1;
	string input;
	string item[4];////Items you pick up in the game

	while (input != "quit") {
		switch (room) {
		case 1:
			cout << "You are in room 1" << endl;
			cout << "you can now go East or South" << endl;
			cin >> input;
			if (input.compare("e") == 0 || input.compare("east") == 0)////cheat for strings
				room = 4;
			else if (input.compare("s") == 0 || input.compare("south") == 0)
				room = 2;
			break;
		case 2:

			cout << "You are in a room full of boxes," << endl;
			if (item[3].compare("Bacon") != 0)//if there's NO medal in their items
				cout << "you see a un-cooked Bacon on the table" << endl; //say it's in the room

			cout << "you can go North or South" << endl;
			cin >> input;
			if (input.compare("north") == 0 || input.compare("go north") == 0)
				room = 1;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 3;
			if (input.compare("bacon") == 0) { //Bacon is now in the inventory

				item[3] = "bacon"; //put in inventory
				cout << "You grabbed the good Bacon!" << endl;
			}

			break;


		case 3:
			cout << "in room 3" << endl;
			cout << "you can go North" << endl;
			cin >> input;
			if (input.compare("north") == 0 || input.compare("go north") == 0)
				room = 2;


			break;


		case 4:
			cout << "You are in room 4!" << endl;
			if (item[2].compare("book") != 0)
				cout << "you see a book on an empty table" << endl;
			cout << "You can go west" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 1;
			if (input.compare("book") == 0) {
				item[2] = "book";
				cout << "You grabbed the book!" << endl;
				break;
			}
		}//end switch
	}//end while
	cout << "Game over" << endl;
	exit(0);
}//end main