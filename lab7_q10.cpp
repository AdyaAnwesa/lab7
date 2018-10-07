/*
10. Write a C++ program to generate nth Fibonacci term using recursion.
*/

#include<iostream>
using namespace std;

//writting pogram to generate the fibonacci series
int fibonacci(int n){
	if(n ==1) return 0;
	else if(n== 2) return 1;
	else{
	return fibonacci(n-1)+fibonacci(n-2);	//recursion to add previous 2 terms
	}
}

//main function
int main(){
	int n;
	cout<< "Hello \nEnter the number of term of fibonacci series that you wanna know\n";
	cin >> n;
	int r = fibonacci(n);
	cout << "The " << n << "th term of fibonacci series is " << r << "\nThank you";
	return 10;
}

