/*
1. Write a C++ program to find power of any number using recursion.
*/

#include<iostream>
using namespace std;

// Writting a program to find power of any number using recursion.
int powerOfNumber(int a, int b){
	if(b==0) return 1;	//condition to terminate recursion
	else{
		return a*powerOfNumber(a,b-1);	//recursion
	}
}

int main(){
	int base, power;
	cout << "Enter your base number and enter the power it has to be raised to \n";
	cin >> base;
	cin >> power;
	int result = powerOfNumber(base, power);
	cout << base << " raised to the power " << power << " is " << result << "\nThank you \n";
return 1;
}
