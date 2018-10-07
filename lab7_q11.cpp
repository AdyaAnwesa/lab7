/*
11. Write a C++ program to find GCD (HCF) of two numbers using recursion.
*/

#include<iostream>
using namespace std;

//recursive function to find gcd 
int gcd(int a, int b){
	if (b == 0)
		return a;
	else { 
		return gcd(b, a%b);	//recursively dividing the the smaller number with reminder of (bigger/smaller) number
	}
}

//main function
int main(){
	int n1, n2, r;
	cout << "Hello \nPlease enter two numbers whose GCD (HCF) you wanna know \n";
	cin >> n1;
	cin >> n2;
	r = gcd(n2,n1);
	cout << "The GCD (HCF) of two numbers " << n1 << " and " << n2 << " is " << r << "\nThank you";
	return 11;
}
