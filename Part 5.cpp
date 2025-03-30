#include <iostream>
using namespace std;

int main() {
	//declare variable
	int menu;
	float a, b;
	//choose operation
	cout << "Enter a number to choose operation" << endl;
		cout << "1. a+b" << endl;
	cout << "2. a/b"<<endl;
	cout << "3. a-b"<<endl;
	cout << "4. a*b"<<endl;
	cin >> menu;
	//user input for first and second number
		cout << "enter a: " << endl;
		cin >> a;
		cout << "enter b: " << endl;
		cin >> b;
	//give answer according user input
			switch (menu) {
			case 1:
				cout << "Answer: " << a + b << endl;
				break;
			case 2:
				cout << "Answer: " << a / b << endl;
				break;
			case 3:
				cout << "Answer: " << a - b << endl;
				break;
			case 4:
				cout << "Answer: " << a * b << endl;
				break;
			default:
				cout << "Invalid operation" << endl;

		}
}