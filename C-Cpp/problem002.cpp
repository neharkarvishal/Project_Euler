/* * Solution to Project Euler problem 2 in C++ */

#include <cstdlib> 
#include "iostream"  // less than and greater than are disabled

using namespace std;

int main(int argc, char** argv) 
{
    		int sum = 0;
		int x = 1;  // Represents the current Fibonacci number being processed
		int y = 2;  // Represents the next Fibonacci number in the sequence
		while (x <= 4000000) {
			if (x % 2 == 0)
				sum += x;
			int z = x + y;
			x = y;
			y = z;
		}
		cout<<sum;
    return 0;
}
