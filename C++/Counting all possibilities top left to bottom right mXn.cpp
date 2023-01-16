#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <math.h>
#include <ctype.h>

#define REP(i, n) for (int i = 1; i <= n; i++)
#define REP0(i, n) for (int i = 0; i < n; i++)
#define pi 2 * acos(0.0)
#define mod 1000000007
#define M 100001
#define INF 0x7fffffff

typedef long long int lli;

using namespace std;

/*
Count all possible paths from top left to bottom right of a mXn matrix
Time Complexity: O(mn)
Space Complexity: O(n)
*/

int gridTraveler(int m, int n)
{
    int dp[n] = {1}; //Intializing every value of this array into 1
    dp[0] = 1;
    REP0(i, m)
    {
        for (int j = 1; j < n; j++)
        {
            dp[j] += dp[j - 1];
        }
    }
    return dp[n - 1];
}

int main()
{
    int n, m;
    cin >> m >> n;
    cout << gridTraveler(m, n) << endl;
    return 0;
}

//Alternative Approach
//o(mn) time, O(m+n) space complexity

// lli memo[101][101]={0};

// lli gridTraveler(int m, int n)
// {
//     if(memo[m][n]!=0)return memo[m][n];
//     if (m == 1 && n == 1)
//         return 1;
//     if (m == 0 || n == 0)
//         return 0;
//     memo[m][n] = gridTraveler(m - 1, n) + gridTraveler(m, n - 1);
//     return memo[m][n];
// }

// int main()
// {
//     int m, n;
//     cin >> m >> n;
//     cout << gridTraveler(m, n) << endl;
//     cout << gridTraveler(1, 1) << endl;
//     cout << gridTraveler(3, 2) << endl;
//     cout << gridTraveler(18, 18) << endl;
//     return 0;
// }