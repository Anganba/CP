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
Merge Sort ; Time Complexity: O(nlogn)
*/
long long int ar[N];

void merge(int l, int r, int mid)
{
    // Initialing left and right array for merge
    int l_size = mid - l + 1;
    int L[l_size + 1];
    int r_size = r - mid;
    int R[r_size + 1];
    for (int i = 0; i < l_size; ++i)
    {
        L[i] = ar[i + l];
    }
    for (int i = 0; i < r_size; ++i)
    {
        R[i] = ar[mid + 1 + i];
    }

    L[l_size] = R[r_size] = INT_MAX;

    int l_i = 0, r_i = 0;
    // Merging Loop
    for (int i = l; i <= r; ++i)
    {
        if (L[l_i] <= R[r_i])
        {
            ar[i] = L[l_i];
            l_i++;
        }
        else
        {
            ar[i] = R[r_i];
            r_i++;
        }
    }
}

void mergeSort(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    merge(l, r, mid);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> ar[i];
    }
    mergeSort(0, n - 1);
    for (int i = 0; i < n; ++i)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
