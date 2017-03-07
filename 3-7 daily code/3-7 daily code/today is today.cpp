#include <iostream>
using namespace std;

int main() {

	double num1;
	double num2;
	double answer = 0;


	cout << "What is the first number?" << endl;
	cin >> num1;
	cout << "What is the second number?" << endl;
	cin >> num2;
	for (int i = 0; i < num1; i++) {
		answer += num2;
	}
	cout << answer << endl;
}