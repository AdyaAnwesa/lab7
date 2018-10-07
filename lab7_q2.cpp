/*
2. Write a C++ program to print all natural numbers between 1 to n using recursion.
*/

#include<iostream>
using namespace std;

//writting a recursion program to print all natural numbers from 1 to n
int naturalNumbers(int i, int n){
	if(i>n){	//condition to terminate recursion
		}
	else{
		cout << i << endl;	//printing natural numbers one after another
		i++;
		naturalNumbers(i,n);	//recursion
	}
	return 21;
}

//writting main function
int main(){
	int n;
	cout << "Hello \nWhile printing natural numbers from 1 to n, please enter what do you want your n to be \n";
	cin >> n; 
	naturalNumbers(1,n);
	cout << "Thank You and Have a nice day \n";
	return 2;
}
