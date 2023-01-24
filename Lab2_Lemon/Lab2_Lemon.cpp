// Lab2_Lemon.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	float A;
	float B;
	float X;
	cout << "Hello, my name is Grace and I'm going to solve the equation:\n";
	cout << "Ax + B = 0\n";
	cout << "For x\n";
	cout << endl;

	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << endl;
	cout << "Solving " << A << "x+" << B << "=0 for x...\n\n";
	
	X = -B / A;

	cout << "The answer is : \nx=" << X << endl;

}