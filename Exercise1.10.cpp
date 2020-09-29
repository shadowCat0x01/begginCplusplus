/* Author: shadowCat0x01
 * Name: Exercise1.10
 * Purpose: Use the decrement operator to write
 * a while that prints the numbers from 10 to
 * 0.
 */

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int val = 10;
	while (val > 0) {
		cout << --val << endl;	
	}	
	return 0;
}
