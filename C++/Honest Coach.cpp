#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <math.h>
#include <ctype.h>
#include <bitset>

#define pi 2 * acos(0.0)
#define M 100000

using namespace std;
/*
 
*/
int min(int a, int b)
{
    return (a < b) ? a : b;
}

int main()
{
    int test, athlete;
    cin >> test;
    while (test--)
    {
        cin >> athlete;
        vector<int> s(athlete);
        for (int &x : s)
        {
            cin >> x;
        }
        sort(s.begin(), s.end());
        int result = s[athlete - 1] - s[0];
        for (int i = 0; i < athlete; i++)
        {
            for (int j = i + 1; j < athlete; j++)
            {
                result = min(result, s[j] - s[i]);
            }
        }
        cout << result << endl;
    }
    return 0;
}