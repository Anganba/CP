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

string x[21]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
string y[12]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};

void numerial(int n){
    if(n<20){
        cout<<x[n]<<endl;
    }
    else{
        int temp1=n/10;
        int temp2=n%10;
        if(temp2==0)cout<<y[temp1]<<endl;
        else
        cout<<y[temp1]<<"-"<<x[temp2]<<endl;
        
    }
}

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    int n;cin>>n;
    numerial(n);
    return 0;
}
