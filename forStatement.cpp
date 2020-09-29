/* Author: shadowCat0x01
 * Name: forStatement
 * Purpose: learn about for on C++ language.
 */

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int sum = 0;
	// sum values from 1 through 10 inclusive
	for (int val = 1; val <= 10; ++val)
		sum += val;	// equivalent to sum = sum + val
	cout << "Sum of 1 to 10 inclusive is " 
		<< sum << endl;
	return 0;
}
