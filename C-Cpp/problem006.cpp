/* * Solution to Project Euler problem 6 in C++ */
#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
    while(t--)
    {
        long long n,s1=0,s2=0;
        cin>>n;
        s1 = n*(n+1)/2;
        s2 = n*(n+1)*(2*n+1)/6;
        cout<<abs(s1*s1-s2)<<endl;
    }

    }
    return 0;
}
