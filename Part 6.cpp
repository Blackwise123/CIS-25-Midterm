#include<iostream>
using namespace std;

int main() {
    int number = 10;
    if (number == 20) {//change = to == it is using assignment operator instead of equality operator
        cout << "Number is 20" << endl;
    }
    else {
        cout << "Number is not 20" << endl;
    }
    //remove the semi colon after the loop to create an empty loop body
    //add a curly bracket so that i is declared inside the loop
    for (int i = 0; i <= 5; i++) {
        cout << i << endl;
    }
    return 0;
}
