#include <iostream>

using namespace std;

int main()
{
    int test, count = 0;
    cin >> test;
    while (test--)
    {
        string s;
        cin >> s;
        if (s[1] == '+')
            count++;
        else
            count--;
    }
    cout << count << endl;
    return 0;
}