/*
9. Write a C++ program to find factorial of any number using recursion.
*/

#include<iostream>
using namespace std;

//Function to find factorial using recursion
int factorial(int n){
	if(n==0) return 1;	//Condition to terminate recursion
	else{
		return n*factorial(n-1);	//this step is basically n*(n-1)*(n-2)*.....*1
	}
}

//Main function
int main(){
	int n;
	cout << "Hello \nEnter a number whose factorial you wanna find \n";
	cin >> n;
	int fact = factorial(n);	//Calling Recursive function
	cout << "Factorial of " << n << " is " << fact << "\nThank You \n";
	return 9;
}
