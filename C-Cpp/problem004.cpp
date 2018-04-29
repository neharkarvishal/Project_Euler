/* * Solution to Project Euler problem 4 C++  */
#include <cstdlib> 
#include "iostream"  // less than and greater than are disabled

using namespace std;

int main(int argc, char** argv) 
{
    int t = 0,n = 0;
    cin>>t;
    while(t>0)
    {
        cin>>n
        int prod=0,a=0;
        for(int i=100;i<=999;i++)
        {
            for(int j=100;j<=999;j++)
            {
                prod=i*j;
                int num=prod;
                int reversenum=0;
                
                while(num!=0)
                {
                    reversenum=reversenum*10;
                    reversenum=reversenum+num%10;
                    num=num/10;}
                    if(prod==reversenum && prod<n)
                    if(prod>a)
                    a=prod;
                }
            }
            cout<<a;
        t--;
        }
    }
}
