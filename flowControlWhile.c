#include <iostream>

/* A program to sum the
 * numbers from 1 through 10
 */

int main()
{
	int sum = 0, val = 1;
	// keep executing the while as long as val is less than or equal to 10
	while (val <= 10) {
		sum += val;	// assigns sum + val to sum, this operation like (sum = sum + val)
		++val;		// add 1 to val
	}
	std::cout << "Sum of 1 to 10 inclusive is "
		<< sum << std::endl;
	return 0;
}
