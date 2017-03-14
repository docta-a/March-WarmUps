#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//declation
void badGuy();
int main() {

	srand(time(NULL));
	while (true) {
		badGuy();//function call
		system("color 4D");
		system("pause");

	}
}
/////////defintions
void badGuy() {
	int num = rand() % 100 + 1;
	if (num <= 50)
		cout << "Oh no!! a Gumba" << endl;
	else if (num > 51 && num <= 80)
		cout << "Run its a Koopa" << endl;
	else	
		cout << "hide and run its a Shy Guy" << endl;
	
	
}