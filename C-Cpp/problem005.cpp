/* * Solution to Project Euler problem 5 in C++ */

#include <iostream>
using namespace std;

typedef long long int in;

// Function to calculate LCM of 2 nos(say m ,n)
in LCM(in m, in n, in i, in ans) //i : multiples
{                                //ans : to store LCM
    if (i > m * n)
        return ans; // Base case of recursion
    if (m == 1 && n == 1)
        return ans; // Base case
    if (m % i == 0 && n % i == 0)
    {                  // Common factor found
        ans = ans * i; // Updating 'ans' and number 'm'
        m /= i;
        n /= i;
    }
    else if (m % i == 0)
    { // Factor of m found
        ans = ans * i;
        m = m / i;
    }
    else if (n % i == 0)
    { //Factor of n found
        ans = ans * i;
        n = n / i;
    }

    if (m % i == 0 || n % i == 0)
        ans = LCM(m, n, i, ans); // checking if same type of more factor 'i' exist, if so
                                 // ,then repeating above process
    else
        ans = LCM(m, n, i + 1, ans); // else , incrementing factor

    return ans;
}
int main()
{
    in nTest, n, ans = 1, i, j;

    cin >> nTest;

    for (i = 1; i <= nTest; i++)
    {
        cin >> n;
        for (j = 2; j <= n; j++) // Loop to find LCM of all numbers upto 'n'
        {
            ans = LCM(ans, j, 2, 1);
        }
        cout << ans << endl;
    }
    return 0;
}
