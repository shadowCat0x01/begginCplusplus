// Author: shadowCat0x01
// Program: Exercise1.9
// Purpose: Write a program that uses a while to sum the numbers from
// 50 to 100.

#include <iostream>

int main()
{
	int sum = 0, val = 50;
	// keep executing the while as long as val is less than or equal to 100
	while (val <= 100) {
		sum += val;	// assigns sum + val to sum
		++val;		// add 1 to val
	}
	std::cout << "The sum of 50 to 100 inclusive is " 
		<< sum << std::endl;	// output to user on terminal
	return 0;
}
