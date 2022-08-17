#include <iostream>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n];
    for (long long i = 0; i < n; i++)
        cin >> a[i];
    for (long long i = 1; i < n; i++)
    {
        long long curr = a[i];
        long long j = i - 1;
        while (j >= 0 && curr < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = curr;
    }
    for (long long i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}