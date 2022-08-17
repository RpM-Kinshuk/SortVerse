#include <iostream>
using namespace std;
void swap(long long arr[], long long i, long long j)
{
    long long temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void DNSort(long long arr[], long long n)
{
    long long low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr, low, mid);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else // if arr[mid]==2
        {
            swap(arr, mid, high);
            high--;
        }
    }
}
int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
        cin >> arr[i];
    DNSort(arr, n);
    for (long long i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
