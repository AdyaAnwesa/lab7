/*
12. Write a C++ program to find LCM of two numbers using recursion.
*/

#include<iostream>
using namespace std;

int c= 1;	//global variable

//recursive function to find lcm
int lcm(int a, int b){
	if(c%a == 0 && c%b == 0) return c;	//terminating statement
	else {
		c++;		//increasing the value of c till lcm is found
		lcm(a,b);	//recursion
		}
	return c;
}

//main function
int main(){
	int p, q, r;
	cout << "Hello \nPlease Enter two numbers who LCM you wanna find \n";
	cin >> p;
	cin >> q;
	r = lcm(p,q);
	cout << "The LCM of " << p << " and " << q << " is " << r << "\nThank You";
	return 12;
}
