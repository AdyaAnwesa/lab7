/*
5. Write a C++ program to find sum of all even or odd numbers in given range using recursion.
*/

#include<iostream>
using namespace std;

// Writting a program to find sum of all even or odd numbers in given range
int sumEvenOdd(int i, int n){
	if(i>n) return 0;	//condition to terminate recursion
	else{
		i=i+2;
		return i+sumEvenOdd(i,n);	//recursion
	}
}

int main(){
	int first,last;
	cout << "Hello \nWhile finding sum of all even or odd numbers in given range, What do you want your 1st and last term to be \n";
	cin >> first;
	cin >> last;
	int sum = sumEvenOdd(first-2,last-2);
	cout << "Sum of all even or odd numbers between " << first << " and " << last << " is " << sum << "\nThank You \n";
return 5;
}
