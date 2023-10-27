//BASIC CALCULATOR

#include <iostream>
using namespace std;

int main(){

	cout << "Welcome to Calculator !" << endl;
	float a;
	cout << "Enter first number: " << endl;
	cin >> a;

	float b;
	cout << "Enter second number: " << endl;
	cin >> b;

	char ch;
	cout << "Enter the operation you want to perform (+,-,*,/): " << endl;
	cin >> ch;

	switch(ch){
	case '+':
		cout << "Addition of two numbers are: " << a+b << endl;
		break;
	case '-':
		cout << "Subtraction of two numbers are: " << a-b << endl;
		break;
	case '*':
		cout << "Multiplication of two numbers are: " << a*b << endl;
		break;
	case '/':
		cout << "Division of two numbers are: " << a-b << endl;
		break;
	default:
		cout << "Invalid operation !" << endl;
	}

	return 0;
}
