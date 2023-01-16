#include <iostream>

using namespace std;
int main()
{
    int n = 10;
    int x = 10;
    int array[100] = {0, 2, 3, 4, 5, 6, 7, 8, 10, 12};
    int k = 0;
    for (int b = n / 2; b >= 1; b /= 2)
    {
        while (k + b < n && array[k + b] <= x)
            k += b;
    }
    if (array[k] == x)
    {
        // x found at index kc
        cout << array[k] << " " << k;
    }
    return 0;
}