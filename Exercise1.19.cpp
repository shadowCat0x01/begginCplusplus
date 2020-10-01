/* Author: shadowCat0x01
 * Name: Exercise1.19
 * Purpose: Write a program that print
 * a range of numbers which the first
 * number is smaller than the second.
 */

#include <iostream>
using namespace std;

int main()
{
	int val_small = 0, val_big = 0;
	cout << "Input two integer numbers: ";
	cin >> val_small >> val_big;
	if (val_small >> val_big) {
		int tmp = val_small;
		val_small = val_big;
		val_big = tmp;
	}
	while (val_small <= val_big) {
		cout << val_small << endl;
		++val_small;
	}
	return 0;
}
