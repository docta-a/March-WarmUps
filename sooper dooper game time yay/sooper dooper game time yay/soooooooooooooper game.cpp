#include <iostream>
#include <string>// RRRAAAAAWWWWRRRR XD
#include <windows.h>// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
#include <string>
using namespace std;
int main() {// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
	int room = 1;
	string input;// RRRAAAAAWWWWRRRR XD
	string item[4];////Items you pick up in the // RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD

	while (input != "quit") {
		switch (room) {// RRRAAAAAWWWWRRRR XD
		case 1:// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
			cout << "You are in a room that has dim light, you see a door with the word east" << endl;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			cout << "you can now go East" << endl;// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
			cin >> input;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			if (input.compare("east") == 0 || input.compare("go east") == 0)////cheat for // RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
				room = 2;
			else if (input.compare("west") == 0 || input.compare("go west") == 0)// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
				room = 11;
			// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD		case 2:// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			cout << "You are in a room full of boxes," << endl;// RRRAAAAAWWWWRRRR XD
			if (item[3].compare("Bacon") != 0) //if there's NO bacon in their items// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
				cout << "you see a un-cooked Bacon on the table" << endl; //say it's in the room
				cout << "you can go North or South" << endl;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			cin >> input;
			if (input.compare("north") == 0 || input.compare("go north") == 0)// RRRAAAAAWWWWRRRR XD
				room = 3;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
				room = 4;
			if (input.compare("bacon") == 0) { //Bacon is now in the inventory
				item[1] = "bacon"; //put in // RRRAAAAAWWWWRRRR XD
				cout << "You grabbed the good Bacon!" << endl;// RRRAAAAAWWWWRRRR XD
				system("Color 3B");// RRRAAAAAWWWWRRRR XD
				system("pause");// RRRAAAAAWWWWRRRR XD
				// RRRAAAAAWWWWRRRR XD
			break;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
		case 3:
			cout << "You enter a room with a PC master race in it," << endl;// RRRAAAAAWWWWRRRR XD
			if (item[2].compare("PC") != 0)
				cout << "you see a pc master race on the table" << endl; 
			cout << "you can go South" << endl;// RRRAAAAAWWWWRRRR XD
			cin >> input;
			if (input.compare("south") == 0 || input.compare("go south") == 0)// RRRAAAAAWWWWRRRR XD
				room = 2;
			if (input.compare("PC") == 0) { // RRRAAAAAWWWWRRRR XD
				item[2] = "PC"; // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
				cout << "You grabbed the pc master race!" << endl;
				system("Color 3F");// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			}
			break;// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
		case 4:// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			cout << "You enter a room with windows, you look out side and see your on the middle of no where!" << endl;// RRRAAAAAWWWWRRRR XD
			cout << "You can go west" << endl;
			cin >> input;// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			if (input.compare("west") == 0 || input.compare("go west") == 0)// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
				room = 5;// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
				break;
		case 5:// RRRAAAAAWWWWRRRR XD
			cout << "You enter the Room, Oh no theres a monster!" << endl;// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			if (item[2].compare("book") != 0)
				cout << "you see a book on an empty table" << endl;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			cout << "You can go west" << endl;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
				room = 6;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
				room = 7;// RRRAAAAAWWWWRRRR XD
				break;
		case 6:// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			cout << "You have entered the gas chamber, you are dead!" << endl;// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			input = "quit";// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
			system("Color 4A");// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
			system("pause");// RRRAAAAAWWWWRRRR XD
			break;// RRRAAAAAWWWWRRRR XD
		case 7:// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			cout << "You are in room 7!" << endl;// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			if (item[2].compare("book") != 0)// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
				cout << "you see a book on an empty table" << endl;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			cout << "You can go west" << endl;// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
			cin >> input;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
			if (input.compare("west") == 0 || input.compare("go west") == 0)// RRRAAAAAWWWWRRRR XD
				room = 1;// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
				break;// RRRAAAAAWWWWRRRR XD
		case 8:// RRRAAAAAWWWWRRRR XD
			cout << "You are in room 8!" << endl;// RRRAAAAAWWWWRRRR XD
			if (item[2].compare("book") != 0)
				cout << "you see a book on an empty table" << endl;// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
			cout << "You can go west" << endl;// RRRAAAAAWWWWRRRR XD
			cin >> input;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			if (input.compare("west") == 0 || input.compare("go west") == 0)// RRRAAAAAWWWWRRRR XD
				room = 1;
			break;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
		case 9:// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
			cout << "You are in room 9!" << endl;// RRRAAAAAWWWWRRRR XD
			if (item[2].compare("book") != 0)// RRRAAAAAWWWWRRRR XD
				cout << "you see a book on an empty table" << endl;// RRRAAAAAWWWWRRRR XD
			cout << "You can go west" << endl;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			cin >> input;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			if (input.compare("west") == 0 || input.compare("go west") == 0)// RRRAAAAAWWWWRRRR XD
				room = 1;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
				break;
		case 10:// RRRAAAAAWWWWRRRR XD
			cout << "You are in room 10!" << endl;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			if (item[2].compare("book") != 0)// RRRAAAAAWWWWRRRR XD
				cout << "you see a book on an empty table" << endl;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
				cout << "You can go west" << endl;// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
			cin >> input;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			if (input.compare("west") == 0 || input.compare("go west") == 0)// RRRAAAAAWWWWRRRR XD
				room = 1;// RRRAAAAAWWWWRRRR XD
			if (input.compare("book") == 0) {// RRRAAAAAWWWWRRRR XD
				item[2] = "book";// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
				cout << "You grabbed the book!" << endl;// RRRAAAAAWWWWRRRR XD
				break;
		case 11:// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR // RRRAAAAAWWWWRRRR XD
			cout << "!!!!!!!!!!!!!EAT SOHOEUENS SHORTS!!!!!!!!!!!" << endl; 
				system("Color 4F");// RRRAAAAAWWWWRRRR XD
			system("pause");// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
			break;
			}// RRRAAAAAWWWWRRRR XD
		}//end switch// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
	}//end while
	cout << "Game over" << endl;// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD
	exit(0);
}//end main// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD// RRRAAAAAWWWWRRRR XD