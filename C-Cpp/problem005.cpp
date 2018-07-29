/* * Solution to Project Euler problem 5 in C++ */
#include <bits/stdc++.h>
using namespace std;

const int Max = 40;

int p[Max];
int dp[Max];

int main()
{

    for (int i = 1; i <= Max; ++i)
    {
        p[i] = 1;
    }

    for (int i = 2; i <= Max; ++i)
    {
        if (p[i] == 1)
        {
            p[i] = i;
            for (int j = 2 * i; j <= Max; j += i)
            {
                if (p[j] == 1)
                {
                    p[j] = i;
                }
                else
                {
                    p[j] = 0;
                }
            }
        }
    }

    dp[1] = 1;
    for (int i = 2; i <= Max; i++)
    {
        if (p[i] > 0)
        {
            dp[i] = dp[i - 1] * p[i];
        }
        else
        {
            dp[i] = dp[i - 1];
        }
    }

    int t, n;
    cin >> t;
    for (int q = 0; q < t; ++q)
    {
        cin >> n;
        cout << dp[n] << "\n";
    }
    return 0;
}
/*
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
*/
