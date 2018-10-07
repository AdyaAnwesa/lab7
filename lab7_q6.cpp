/*
6. Write a C++ program to find reverse of any number using recursion.
*/

#include<iostream>
using namespace std;

//Writting a program to find reverse of any number
int reverse(int n){
	if(n == 0){	//condition to terminate recursion
	}
	else{
	cout << n%10 ;	//gives us the last digit
	reverse (n/10);	//takes quotient into recursive function 
	}
}

//Writting main function.
int main(){
	int n;
	cout << "Hello \nPlease enter the number whose reverse you wanna know \n";
	cin >> n;
	reverse(n); //calling recursive function
	cout << "\nThank You \n";
	return 6;
}

