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
			cout << "You are in a room that has dim light, you see a door with the word east" << endl;
			cout << "you can now go East" << endl;
			cin >> input;
			if (input.compare("e") == 0 || input.compare("east") == 0)////cheat for strings
				room = 2;
		case 'EE':
			cout << "!!!!!!!!!!!!!EAT SOHOEUENS SHORTS!!!!!!!!!!!" << endl; \
				system("Color 4F");
			system("pause");
			int noise;
			void ESS();

			int main() {

				ESS();
			
			}

			void ESS() {

				cout << "How many times do you want to hear it?" << endl;
				cin >> noise;

				cout << "eat sochoeun's shorts" << endl;
				for (int i = 0; i < noise; i++)
					PlaySound("shorts.wav", NULL, SND_FILENAME);

			}
			break;
		case 2:
			cout << "You are in a room full of boxes," << endl;
			if (item[3].compare("Bacon") != 0) //if there's NO bacon in their items
				cout << "you see a un-cooked Bacon on the table" << endl; //say it's in the room
				cout << "you can go North or South" << endl;
			cin >> input;
			if (input.compare("north") == 0 || input.compare("go north") == 0)
				room = 3;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 4;
			if (input.compare("bacon") == 0) { //Bacon is now in the inventory
				item[1] = "bacon"; //put in inventory
				cout << "You grabbed the good Bacon!" << endl;	}
			break;
		case 3:
			cout << "You are in a room full of boxes," << endl;
			if (item[2].compare("PC") != 0)
				cout << "you see a pc master race on the table" << endl; 
			cout << "you can go South" << endl;
			cin >> input;
			if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 2;
			if (input.compare("PC") == 0) { 
				item[2] = "PC"; 
				cout << "You grabbed the pc master race!" << endl;
			}
			break;
		case 4:
			cout << "You enter a room with windows, you look out side and see your on the middle of no where!" << endl;
			cout << "You can go west" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 5;
				break;
		case 5:
			cout << "You enter the Room, Oh no theres a monster!" << endl;
			if (item[2].compare("book") != 0)
				cout << "you see a book on an empty table" << endl;
			cout << "You can go west" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 6;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 7;
				break;
		case 6:
			cout << "You have entered the gas chamber, you are dead!" << endl;
			
				break;
		case 7:
			cout << "You are in room 7!" << endl;
			if (item[2].compare("book") != 0)
				cout << "you see a book on an empty table" << endl;
			cout << "You can go west" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 1;
				break;
		case 8:
			cout << "You are in room 8!" << endl;
			if (item[2].compare("book") != 0)
				cout << "you see a book on an empty table" << endl;
			cout << "You can go west" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 1;
			break;
		case 9:
			cout << "You are in room 9!" << endl;
			if (item[2].compare("book") != 0)
				cout << "you see a book on an empty table" << endl;
			cout << "You can go west" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 1;
				break;
		case 10:
			cout << "You are in room 10!" << endl;
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