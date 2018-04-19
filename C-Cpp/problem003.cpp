/* * Solution to Project Euler problem 3 C++  */
#include <cstdlib> 
#include "iostream"  // less than and greater than are disabled

using namespace std;

int main(int argc, char** argv) 
{
        long N = 600851475143L;
        
        while(N % 2 == 0)
        {
            N = N/2;
        }
        
        for(long factor = 3; factor < N; factor = factor + 2)
        {
            while(N % factor == 0 && factor < N)
            {
                N = N / factor;
            }
        }
        cout<<N;
}
