/*
8. Write a C++ program to find sum of digits of a given number using recursion.
*/


#include<iostream>
using namespace std;

//Writting a program to find sum of digits of a given number
int sumDigits(int n){
	if(n == 0){	//condition to terminate recursion
	}
	else{
	return (n%10) + sumDigits (n/10);	//last number gets added on recursion
	}
}

//Writting main function.
int main(){
	int n;
	cout << "Hello \nPlease enter the number whose sum of digits you wanna know \n";
	cin >> n;
	int sum= sumDigits(n); //calling recursive function
	cout << "Sum of digits of " << n << " is " << sum << "\nThank You \n";
	return 8;
}

