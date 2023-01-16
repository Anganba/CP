#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <math.h>
#include <ctype.h>
#include <climits>
#include <stack>

#define REP(i, n) for (int i = 1; i <= n; i++)
#define REP0(i, n) for (int i = 0; i < n; i++)
#define pi 2 * acos(0.0)
#define mod 1000000007
#define INF 0x7fffffff
#define M 100001

const int N = 1e5 + 10;

typedef long long int lli;

using namespace std;
/*

*/
long long int ar[N];

bool isBalancedExp(string exp)
{
    stack<char> stk;
    char x;
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            stk.push(exp[i]);
            continue;
        }
        if (stk.empty())
            return false;
        switch (exp[i])
        {
        case ')':
            x = stk.top();
            stk.pop();
            if (x == '{' || x == '[')
                return false;
            break;
        case '}':
            x = stk.top();
            stk.pop();
            if (x == '(' || x == '[')
                return false;
            break;
        case ']':
            x = stk.top();
            stk.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
    return (stk.empty());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string expresion;
    cin >> expresion;
    //= "()[(){()}]";
    if (isBalancedExp(expresion))
        cout << "This is Balanced Expression";
    else
        cout << "This is Not Balanced Expression";
    return 0;
}
