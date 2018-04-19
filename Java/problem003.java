/* * Solution to Project Euler problem 3 in Java */

package project.euler.java;

public class problem003 
{
    public static void main(String[] args)
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
        System.out.println(N);
    }

}
