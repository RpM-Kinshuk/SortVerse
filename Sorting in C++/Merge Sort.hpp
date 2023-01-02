#include <vector>
using std::vector;
namespace tmp
{
    void merge(vector<long long> &arr, long long l, long long mid, long long r)
    {
        long long n1 = mid - l + 1;
        long long n2 = r - mid;
        long long a[n1], b[n2];
        for (long long i = 0; i < n1; i++)
            a[i] = arr[l + i];
        for (long long i = 0; i < n2; i++)
            b[i] = arr[mid + 1 + i];
        long long i = 0, j = 0, k = l;
        while (i < n1 && j < n2)
        {
            if (a[i] < b[j])
            {
                arr[k] = a[i];
                i++;
                k++;
            }
            else
            {
                arr[k] = b[j];
                j++;
                k++;
            }
        }
        while (i < n1)
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        while (j < n2)
        {
            arr[k] = b[j];
            k++;
            j++;
        }
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
}
namespace Ki
{
    void MergeSort(vector<long long> &arr, long long l, long long r)
    {
        if (l < r)
        {
            if (r - l + 1 < 10)
            {
                tmp::InsSort(arr, l, r);
                return;
            }
            long long mid = (l + r) / 2;
            MergeSort(arr, l, mid);
            MergeSort(arr, mid + 1, r);
            tmp::merge(arr, l, mid, r);
        }
    }
}

/*int main()
{
    long long n;
    // printf("Enter size of array: "); scanf("%d",&n);
    cin >> n;
    long long arr[n];
    // printf("Enter elements of array: ");
    for (long long i = 0; i < n; i++)
        cin >> arr[i];
    mergesort(arr, 0, n - 1);
    for (long long i = 0; i < n - 1; i++)
        cout << arr[i] << " ";
    // delete[]arr;
    // free(arr);
    return 0;
}*/