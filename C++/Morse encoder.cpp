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
#define N 101
#define INF 0x7fffffff

typedef long long int lli;

using namespace std;
/*
Morse Code Decoder & Encoder!
By Anganba Singha
*/
bool flag = true;
char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char number[11] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
string morse[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
string morseNumerical[11] = {"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----."};

char reversemorseCode[37] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
string reverseCode[37] = {"-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
string decode = "";

void morseCode(string A, int n)
{
    REP0(i, n)
    {
        if (A[i] == '.' || A[i] == '-')
        {
            cout << "Encoding Failed! Check  your input content." << endl;
            flag = false;
            break;
        }
        if (A[i] == 32)
        {
            decode += "   ";
        }
        else if (A[i] >= 48 && A[i] <= 57)
        {
            decode += morseNumerical[(A[i] - 48)];
            decode += " ";
        }
        else if ((A[i] >= 65 && A[i] <= 90) || (A[i] >= 97 && A[i] <= 122))
        {
            for (int k = 0; k < 26; k++)
            {
                if (toupper(A[i]) == alphabet[k])
                {
                    decode += morse[k];
                    decode += " ";
                    continue;
                }
            }
        }
    }
    if (flag)
    {
        cout << decode << endl;
        cout << "Encoding Successfully Done ! " << endl;
    }
}

void reverseMorse(string A, int v)
{
    string tmp = "";
    REP0(i, v)
    {
        if (A[i] > 46 && A[i] < 45)
        {
            cout << "Decoding Failed! Check your input content." << endl;
            flag = false;
            break;
        }
        if (A[i] != 32)
        {
            tmp += A[i];
            if (i == v - 1)
            {
                for (int j = 0; j < 36; j++)
                {
                    if (tmp == reverseCode[j])
                    {
                        decode += reversemorseCode[j];
                        tmp = "";
                        break;
                    }
                }
                break;
            }
        }
        else
        {
            for (int j = 0; j < 36; j++)
            {
                if (tmp == reverseCode[j])
                {
                    decode += reversemorseCode[j];
                    tmp = "";
                    break;
                }
            }
        }
    }
    if (flag)
    {
        cout << decode << endl;
        cout << "Decoding Successfully Done ! " << endl;
    }
}

int main()
{
#ifdef sxk
    freopen("in.txt", "r", stdin);
#endif
    string text;
    cout << "Enter your content: " << endl;
    getline(cin, text);
    int g = text.length();
    int t;
    cout << "Type '1' for encoding or type '2' for decoding ! " << endl;
    cin >> t;
    if (t == 1)
        morseCode(text, g);
    else if (t == 2)
        reverseMorse(text, g);
    return 0;
}
