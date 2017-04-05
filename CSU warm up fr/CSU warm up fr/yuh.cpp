#include <iostream>
using namespace std;
int main() {

	int beans;
	int carrots;
	int lettuce;
	int peas;
	int squash;

	cout << "What is the weight of our beans" << endl;
	cin >> beans;
	cout << "What is the weight of our carrots" << endl;
	cin >> carrots;
	cout << "What is the weight of our lettuce" << endl;
	cin >> lettuce;
	cout << "What is the weight of our peas" << endl;
	cin >> peas;
	cout << "What is the weight of our squash" << endl;
	cin >> squash;

	cout << "Beans: ";
	for (int i = 0; i < beans; i++) {
		cout << "B";
	}
	cout << endl;
	cout << "carrots: ";
	for (int i = 0; i < carrots; i++) {
		cout << "C";
	}
	cout << endl;
	cout << "lettuce: ";
	for (int i = 0; i < lettuce; i++) {
		cout << "L";
	}
	cout << endl;
	cout << "peas: ";
	for (int i = 0; i < peas; i++) {
		cout << "P";
	}
	cout << endl;
	cout << "squash: ";
	for (int i = 0; i < squash; i++) {
		cout << "S";
	}

}