#include <iostream>
#include <vector>
using std::vector;
namespace tmp
{
    long long Split(vector<long long> &arr, long long l, long long r)
    {
        long long pivot = arr[r];
        long long i = l - 1;
        for (long long j = l; j < r; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                std::swap(arr[i], arr[j]);
            }
        }
        std::swap(arr[i + 1], arr[r]);
        return i + 1;
    }
}
namespace Ki
{
    void QuickSort(vector<long long> &arr, long long l, long long r)
    {
        if (l < r)
        {
            long long pi = tmp::Split(arr, l, r);
            QuickSort(arr, pi + 1, r);
            QuickSort(arr, l, pi - 1);
        }
    }
}

/*int main()
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
}*/