/* Author: shadowCat0x01
 * Name: unkownNumber
 * Purpose: A program that run while loop,
 * but will receive the numbers of user.
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int sum = 0, val = 0;
	// read until end-of-file, calculating a running total of all values read
	while (cin >> val)
		sum += val; // equivalent to sum = sum + val
	cout << "The sum is: " << sum << endl;
	return 0;
}
