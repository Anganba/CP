#include <iostream>

using namespace std;

int main()
{
    int test, N = 0;
    cin >> test;
    while (test--)
    {
        int n, count = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> n;
            if (n == 1)
                count++;
        }
        if (count > 1)
            N += (count / 2);
    }
    cout << N << endl;
    return 0;
}