/* * Solution to Project Euler problem 1 in C++ */
#include <cstdlib> 
#include "iostream"  // less than and greater than are disabled

using namespace std; 
int main(int argc, char** argv)
{
  int sum =0;  
  for(int i = 0; i < 1000; i++)
    if( (i%3 == 0) || (i % 5 == 0) )
    sum = sum + i;
    
  cout << sum << endl;
  return 0;
}
