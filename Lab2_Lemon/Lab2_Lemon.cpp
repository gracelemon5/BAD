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

	cout << "Please enter a value for A:\n";
	cin >> A;
	cout << "A = " + A + "\n";
	cout << "A=" << A << endl;
	B = (A * 4) + 1;
	cout << "And B=" << B << endl;
}