/* Author: shadowCat0x01
 * Name: Exercise1.12
 * Purpose: Check the final sum value
 */

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int sum = 0; // declare sum as 0
	// create de for loop
	for (int i = -100; i <= 100; ++i)
		sum += i;
	cout << "The sum of -100 to 100 is "
		<< sum << endl;
	return 0;
}
