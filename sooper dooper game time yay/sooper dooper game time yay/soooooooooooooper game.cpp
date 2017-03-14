#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	char input;
	int room = 0;

	while (input = 'q')
		switch (room = 'q') {
		case 1:
			cout << "you are in room 1! you can go East(e)" << endl;
			cin >> input;
			room = 1;
			if (input == 'e')
				cout << "You have enterd the room with no windows, but 3 doors" << endl;
			break;
			//////////////room number 2
		case 2:
			cout << "you can go South(s),North (n)";
			cin >> input;

			if (input == 's')
				room = 4;
			else if (input == 'n')
				room == 3;
			break;
			////////////////////////room number 3
		case 3:
			cout << "you are in room 3! ";
			cin >> input;
			room = 3;
			if (input == 's')
				cout << "go on to the next room" << endl;
			break;
			//////////////room #4
		case 4:
			cout << "you are in room 4!";
			cin >> input;
			room = 3;
			if (input == 's')
				cout << "go on to the next room" << endl;
			break;
			///////// Room number #5
		case 5:
			cout << "you are in room 5! ";
			cin >> input;
			room = 3;
			if (input == 's')
				cout << "go on to the next room" << endl;
			break;
		}//end of loop
}//end of program