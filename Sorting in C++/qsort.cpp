#include <iostream>
using namespace std;
void swap(long long *arr, long long i, long long j)
{
    long long temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
long long split(long long *arr, long long l, long long r)
{
    long long pivot = arr[r];
    long long i = l - 1;
    for (long long j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
    return i + 1;
}
void qsort(long long *arr, long long l, long long r)
{
    if (l < r)
    {
        long long pi = split(arr, l, r);
        qsort(arr, pi + 1, r);
        qsort(arr, l, pi - 1);
    }
    return;
}
long long main(void)
{
    long long n;
    cin >> n;
    // printf("\nEnter size of array: "); scanf("%d",&n);
    long long arr[n];
    // printf("\nEnter elements of array: ");
    for (long long i = 0; i < n; i++)
        cin >> arr[i];
    qsort(arr, 0, n - 1);
    for (long long i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}