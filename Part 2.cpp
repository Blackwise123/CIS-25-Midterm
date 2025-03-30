#include <iostream>
using namespace std;


int main()
{ //First part
	for (int i = 2;i <= 50;i+=2) {//loop until i is 50 and every loop increase i by 2
		
		cout << i;//print even num which is i
		if (i != 50) {//print each number will coma behind except last number 50
			cout << ",";
		}
	}
	// Second part
	int a[9];
	for (int i = 0;i <10;i++) {
		cout << "enter"<<i+1 << "number for second part: ";
		cin >> a[i];//ask user input for 10 numbers
	}
	for (int i= 0;i < 10;i++) {// i increase every loop by 1
		cout << a[i];//print array a according to i
		if (i != 9) {//print every array with coma except last array
			cout << ",";
		}
	}
	return 0;


}