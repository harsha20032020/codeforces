#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int onec = 0, twoc = 0, threc = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            onec++;
        }
        else if (s[i] == '2')
        {
            twoc++;
        }
        else if (s[i] == '3')
        {
            threc++;
        }
        else
        {
        }
    }
    int total = onec + twoc + threc;
    if (total < 3)
    {
        if (onec == 1 && total == 1)
        {
            cout << "1"
                 << endl;
        }
        if (twoc == 1 && total == 1)
        {
            cout << "2"
                 << endl;
        }
        if (threc == 1 && total == 1)
        {
            cout << "3"
                 << endl;
        }
        if (onec == 1 && twoc == 1 && total == 2)
        {
            cout << "1+2"
                 << endl;
        }
        if (onec == 1 && threc == 1 && total == 2)
        {
            cout << "1+3"
                 << endl;
        }
        if (twoc == 1 && threc == 1 && total == 2)
        {
            cout << "2+3"
                 << endl;
        }
    }
    if (onec != 0)
    {
        for (int i = 0; i < onec - 1; i++)
        {
            cout << "1+";
        }
        //cout << "1";
    }
    if (threc != 0)
    {
        for (int i = 0; i < twoc - 1; i++)
        {
            cout << "2+";
        }
        cout << "2";
    }
    if (threc != 0)
    {
        for (int i = 0; i < threc - 1; i++)
        {
            cout << "3+";
        }
        cout << "3";
    }
}