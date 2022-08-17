#include <iostream>
using namespace std;

int main()
{
    long long n, i = 0, temp;
    // cout<<"Enter size of array: ";
    cin >> n;
    long long a[n];
    // cout<<"Enter elements of array:\n";
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n - 1; i++)
    {
        bool swcnt = 0;
        for (long long j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swcnt = 1;
            }
            if (swcnt == 0)
                break;
        }
        if (swcnt == 0)
            break;
    }
    for (long long i = 0; i < n; i++)
        cout << a[i] << " ";
}