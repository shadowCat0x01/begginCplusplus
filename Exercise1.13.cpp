/* Author: shadowCat0x01
 * Name: Exercise1.13
 * Purpose: Rewrite code writed with while,
 * but now write with for loop.
 */

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int sum = 0;
	for (int i = 1; i <= 10; ++i)
		sum += i;
	cout << "The sum of 1 to 10 is " 
		<< sum << endl;
	return 0;
}
