#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <ctype.h>

#define REP(i, n) for (int i = 1; i <= n; i++)
#define pi 2 * acos(0.0)
#define M 10000
#define N 101
#define INF 0x7fffffff

typedef long long int lli;

using namespace std;
/*

*/

int pre[100005],suff[100005];
int ar[100001];

int gcd(int a,int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}
int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    int t,q,n,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        REP(i,n)cin>>ar[i];
        pre[0]=suff[n+1]=0;
        REP(i,n)pre[i]=gcd(pre[i-1],ar[i]);
        for(int i=n;i>=1;i--){
            suff[i]=gcd(ar[i],suff[i+1]);
        }
        while(q--){
            cin>>l>>r;
            cout<<gcd(pre[l-1],suff[r+1])<<endl;
        }
    }
    return 0;
}
