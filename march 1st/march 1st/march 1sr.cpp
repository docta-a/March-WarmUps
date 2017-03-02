#include <iostream>
#include <Windows.h>
using namespace std;

char input;
void Jukebox(char input);

int main() {

	Jukebox(input);

}

void Jukebox(char input) {
	cout << "Dog (g), Cat (c), Pig (p) " << endl;
	cin >> input;
	switch (input) {
	case 'd':
		cout << "d";
		PlaySound("dog.wav", NULL, SND_FILENAME);
		break;
	case 'c':
		cout << "c";
		PlaySound("cat.wav", NULL, SND_FILENAME);
		break;
	case 'p':
		cout << "p";
		PlaySound("pig.wav", NULL, SND_FILENAME);
		break;
	}
}