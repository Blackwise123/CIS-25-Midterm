#include <iostream>
using namespace std;
/**
* Function to check the three number array which is largest
* @param take in array containing user input
* @return single largest int from the array
*/
int check(int a[]) {
	//declare the largest number
	int ans;
	//loop to compare a[0] to other number
	for (int i = 1;i <= 2;i++) {
		//if a[0] is larger it is assigned to ans
		if (a[0] > a[i]) {
			ans = a[0];
		}
		//if a[0] is smaller current a[i] is assigned to ans
		else
		{
			ans = a[i];
		}
	}
	return ans;
}
int main() {
	
	//declare the array
	int a[3];
	cout << "first part" << endl;
	//ask user 3 numbers
	for (int i = 0;i < 3;i++) {
		cout << "Enter " << i + 1 << " number: ";
		cin >> a[i];
	}
	//check the which number is largest in the array
	int ans = check(a);
	//print out ans
	cout << ans;
	
	cout << "second part" << endl;
	int year;
	cout << "Enter a year: ";
	cin >> year;

	// check if it is leap year
	// a leap year can be divided by 4
	// and if it can be divided 100 ,then it must be divided by 400
	bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

	if (isLeapYear) {
		cout << year << " is a leap year." << endl;
	}
	else {
		cout << year << " is not a leap year." << endl;
	}
	return 0;

}