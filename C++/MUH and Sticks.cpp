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
#define M 100001
#define N 101
#define INF 0x7fffffff

typedef long long int lli;

using namespace std;
/*

*/

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    int ar[10];
    int n = 6, temp1, temp2, temp3, a = 0;
    bool flag = true;
    REP0(i, n)
    cin >> ar[i];
    sort(ar, ar + n);
    //Checking if it has 4 legs
    REP0(i, n)
    {
        REP0(j, n)
        {
            if (ar[i] == ar[j])
                a++;
            if (a == 4)
                temp1 = ar[j];
        }
        if (a < 4)
            a = 0;
        else break;
    }
    
    if (a >= 4)
    {
        if (a == 6)
            cout << "Elephant" << endl;
        else
        {
            REP0(i, n)
            {
                if (ar[i] != temp1)
                {
                    if (flag)
                    {
                        temp2 = ar[i];
                        flag = false;
                    }
                    else
                    {
                        temp3 = ar[i];
                    }
                }
            }

            if (temp2 == temp3)
                cout << "Elephant" << endl;
            else
                cout << "Bear" << endl;
        }
    }
    else
    {
        cout << "Alien" << endl;
    }
    return 0;
}
