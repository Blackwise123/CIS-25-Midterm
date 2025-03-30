#include <iostream>
#include <string>
using namespace std;
int main() {
	//first part
	//declare variables
	string name;
	int age;
	float num;
	//user input
	cout << "What is your name? "<<endl;
	getline(cin, name);
	cout << "What is your age? " << endl;
	cin >> age;
	cout << "what is your favorite number? " << endl;
	cin >> num;
	//fomatted output
	cout << "_________User__________" << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << "years old" << endl;
	cout << "Favorite Number: " << num << endl;
	cout << "________________________" << endl;

	//second part
	//declare variables
	int i = 4;
	float f= 3.12f;
	char c = '!';
	string  s = "dfdfs";
	//print variables for each type
	cout << "int: " << i << endl;
	cout << "float: " << f << endl;
	cout << "char: " << c << endl;
	cout << "string: " << s << endl;
	return 0;
}