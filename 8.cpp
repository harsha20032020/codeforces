#include<iostream> 
using namespace std;

void distinct(int a[], int num)
{
    for (int i = 0; i < num; i++)
    {
        int j;
        for (j = 0; j < i; j++)
            if (a[i] == a[j])
                break;
        if (i == j)
            cout << i+1<<" ";
    }
}
int main()
{
    int num,k;
    cin >> num>>k;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    cout << endl;
    distinct(a, num);
    return 0;
}
