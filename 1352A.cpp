#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test, a;
    cin >> test;
    while (test--)
    {
        cin >> a;
        int thousands, hundreds, tens, ones;
        thousands = a / 1000;
        hundreds = (a - (thousands * 1000)) / 100;
        tens = (a - (thousands * 1000) - (hundreds * 100)) / 10;
        ones = (a - (thousands * 1000) - (hundreds * 100) - (tens * 10)) / 1;
        if (a >= 1000)
        {
            cout << "4\n";
            cout << thousands * 1000 << " " << hundreds * 100 << " " << tens * 10 << " " << ones << endl;
        }
        else if (a >= 100)
        {
            cout << "3\n";
            cout << hundreds * 100 << " " << tens * 10 << " " << ones << endl;
        }
        else if (a >= 10)
        {
            cout << "2\n";
            cout << tens * 10 << " " << ones << endl;
        }
        else
        {
            cout << "1\n";
            cout << ones << endl;
        }
    }
}
