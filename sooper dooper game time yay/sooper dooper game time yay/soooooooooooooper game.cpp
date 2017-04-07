#include <iostream>
#include <string>
#include <Windows.h>
#include <string>
using namespace std;
int main() {
	int room = 1;
	string input;
	string item[4];////Items you pick up in the game

	while (input != "quit") {
		switch (room) {
		case 1:
			PlaySound(("TJ.wav"), NULL, SND_FILENAME);
			cout << "You are in a room that has dim light, you see a door with the word east" << endl;// // // 
			cout << "you can now go East" << endl;
			cin >> input;
			if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 3;
			else if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 2;
			break;
		case 2: ////easter egg room////
			cout << "!!!!!!!!!!!!!EAT SOHOEUENS SHORTS!!!!!!!!!!!" << endl;
			PlaySound(("booty.wav"), NULL, SND_FILENAME);
			input = "quit";
			system("Color 4A");
			system("pause");
			break;
		case 3:
			cout << "You are in a kitchen full of uncooked food" << endl;
			if (item[3].compare("Bacon") != 0) //if there's NO bacon in their items//  
				cout << "you see a un-cooked Bacon on the table" << endl; //say it's in the room
			cout << "you can go North or South" << endl;
			cin >> input;
			if (input.compare("north") == 0 || input.compare("go north") == 0)
				room = 4;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)//  
				room = 5;
			if (input.compare("bacon") == 0) { //Bacon is now in the inventory
				item[1] = "bacon"; //put in 
				cout << "You grabbed the good Bacon!" << endl;
				system("Color 4B");
				
				break;
		case 4:
			cout << "You enter a room with a PC master race in it," << endl;
			if (item[2].compare("PC") != 0)
				cout << "you see a pc master race on the table" << endl;
			cout << "you can go South" << endl;
			cin >> input;
			if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 3;
			if (input.compare("PC") == 0) { 
				item[2] = "PC";  
				cout << "You grabbed the pc master race!" << endl;
				system("Color 3F");
			}
			break;
		case 5:
			cout << "You enter a room with windows, you look out side and see your on the middle of no where!" << endl;// 
			cout << "You can go west" << endl;
			cin >> input; 
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 6;
			break;
		case 6:
			cout << "You enter the Room, Oh no you look in the mirror" << endl;
			cout << "You can go west or south" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 7;
			else if (input.compare("south") == 0 || input.compare("go south") == 0)
				room = 8;
			break;
		case 7://death room//
			PlaySound(("molly.wav"), NULL, SND_FILENAME);
			cout << "You have entered the gas chamber, where the evil Molly recideds, you are dead!" << endl;
			input = "quit"; 
			system("Color 4A");
			system("pause");			
			PlaySound(("dead.wav"), NULL, SND_FILENAME);
			break;
		case 8:
			cout << "You enter the room of the evil Levi, hes not in here tho" << endl;
			cout << "You can go west" << endl;
			cin >> input;
			cout << "You can go east" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 9;
			else if (input.compare("east") == 0 || input.compare("go east") == 0)
				room = 7;
			break;
		case 9:
			cout << "You can smell a freshly open pack of gummy bears, somebody is nearby" << endl;
			cout << "You can go west" << endl;
			cin >> input;
			cout << "you can go east" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 10;
			else if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 8;
			break;
		case 10: 
			cout << "You are in room 9!" << endl;
			if (item[2].compare("book") != 0)
				cout << "you see a book on an empty table" << endl;
			cout << "You can go west" << endl;
			cin >> input;
			if (input.compare("west") == 0 || input.compare("go west") == 0)
				room = 11;
			break;
		case 11:
			PlaySound(("levi.wav"), NULL, SND_FILENAME);
			cout << "You Have encounterd the dark master Leo!!! He will only let you go if you feed him and play computer games with him" << endl;
			if (item[2].compare("book") != 0)
			cout << "You must fill his request" << endl;
			cin >> input;
			if (input.compare("quit") == 0 || input.compare("go west") == 0)
				room = 2;
			if (input.compare("book") == 0) {
				item[2] = "book";
				cout << "You grabbed the book!" << endl;
			}
				break;
		
			
			}//end switch
		}//end while
		
	}cout << "Game over" << endl;
		exit(0);
}//end main// 