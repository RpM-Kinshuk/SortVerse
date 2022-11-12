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

    void InsSort(vector<long long> &arr, long long l, long long r)
    {
        for (long long i = l + 1; i <= r; i++)
        {
            long long curr = arr[i];
            long long j = i;
            while (j > l && arr[j - 1] > curr)
            {
                arr[j] = arr[j - 1];
                j--;
            }
            arr[j] = curr;
        }
    }

    long long Hoarepartition(vector<long long> &a, long long low, long long high)
    {
        long long pivot = a[low];
        long long i = low - 1;
        long long j = high + 1;
        while (true)
        {
            do
            {
                i++;
            } while (a[i] < pivot);

            do
            {
                j--;
            } while (a[j] > pivot);

            if (i >= j)
            {
                return j;
            }
            std::swap(a[i], a[j]);
        }
    }
}

namespace Ki
{
    void QuickSort(vector<long long> &arr, long long l, long long r)
    {
        if (l < r)
        {
            long long pi = tmp::Hoarepartition(arr, l, r);
            QuickSort(arr, pi + 1, r);
            QuickSort(arr, l, pi - 1);
        }
    }

    void HybridQuickSort(vector<long long> &arr, long long l, long long r)
    {
        while (l < r)
        {
            if (r - l + 1 < 10)
            {
                tmp::InsSort(arr, l, r);
                break;
            }
            else
            {
                long long pi = tmp::Hoarepartition(arr, l, r);
                if (pi - l < r - pi)
                {
                    HybridQuickSort(arr, l, pi - 1);
                    l = pi + 1;
                }
                else
                {
                    HybridQuickSort(arr, pi + 1, r);
                    r = pi - 1;
                }
            }
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