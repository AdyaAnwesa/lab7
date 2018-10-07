/*
7. Write a C++ program to check whether a number is palindrome or not using recursion.
*/

#include<iostream>
using namespace std;

//Writting a program to find reverse of any number
int reverse(int n,int rev){
	if(n==0){
        return rev;	//condition to terminate recursion
	}
	else{
	return reverse (n/10,rev*10+(n%10));	
	}
}

//Writting main function.
int main(){
	int n;
	int r=0;
	cout << "Hello \nPlease enter the number whose palindromicity you wanna check \n";
	cin >> n;
	r =reverse(n,r); //calling recursive function
	cout << "Reverse of the number is " << r << endl;
	
	//checking palindrom or not
	if (r==n){
		cout << "Yes, The number is Palindromic \n";
	}
	else{
		cout << "No, The number is not palindromic \n";
	}
	cout << "Thank You \n";
	return 7;
}

