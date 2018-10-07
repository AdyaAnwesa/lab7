/*
3. Write a C++ program to print all even or odd numbers in given range using recursion.
*/

#include<iostream>
using namespace std;

//writting a recursion program to print all even or odd in given range
int evenOddNumbers(int i, int n){
	if(i>n){	//condition to terminate recursion
		}
	else{
		cout << i << endl;	//printing all even or odd numbers one after another
		i=i+2;
		evenOddNumbers(i,n);	//recursion
	}
	return 31;
}

//writting main function
int main(){
	int i,n;
	cout << "Hello \nWhile printing all even or odd in given range, please enter the 1st and last numbers of the range \n";
	cin >> i;
	cin >> n; 
	evenOddNumbers(i,n);
	cout << "Thank You and Have a nice day \n";
	return 3;
}
