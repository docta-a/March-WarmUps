#include <iostream>
using namespace std;

int main() {
	int input = 0;
	bool prime = false;
	cout << "choose a number" << endl;
	cin >> input;

		
		while (1) {
			prime = true;
			input++;
			for (int i = 2; i < input; i++)
				if (input % i == 0)
					prime = false;
		}

				if (prime) {
					cout << "The smallest prime number bigger than your original number is: " << input << endl;
					return 0;
				}

}//end main

