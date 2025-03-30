/**
* Function is passed by reference to prevent copying parameters
* @param length lenght of rect (pass by reference)
* @param width width of rect (pass by reference)
* @return area of rect (length*width)
*/
#include <iostream>
using namespace std;
float calculateArea(const float &length,const float &width) {
	return length * width;
}
/**
 * function to check prime
 * @param num The integer to check
 * @return true if the number is prime, false otherwise
 */
bool isPrime(int num) {
    // num less than or equal 1 is not prime
    if (num <= 1) {
        return false;
    }
    // keep incre until divisor is greater or equal squar num which is highest possible divisor
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // it is not prime since there is divisor
        }
    }

    return true; // it is prime due since there is no divisor
}

int main(){
    //first part
	//call function to get 20 from 4*5
	float a = calculateArea(4, 5);
	cout << a;//print the area
	//second part
    //call function to check 11 if prime
    bool b=isPrime(11);
    cout << b;//check if 11 is prime and it is true
    return 0;
}