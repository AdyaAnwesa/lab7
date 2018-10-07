/*
4. Write a C++ program to find sum of all natural numbers between 1 to n using recursion.
*/

#include<iostream>
using namespace std;

// Writting a program to find sum of all natural numbers between 1 to n 
int sumNaturalNumbers(int i, int n){
	if(i==n) return 0;	//condition to terminate recursion
	else{
		i++;
		return i+sumNaturalNumbers(i,n);	//recursion
	}
}

int main(){
	int last;
	cout << "Hello \nWhile finding sum of all natural numbers between 1 to n, What do you want your last term to be \n";
	cin >> last;
	int sum = sumNaturalNumbers(0,last);
	cout << "Sum of all natural numbers between 1 to " << last << " is " << sum << "\nThank You \n";
return 4;
}
