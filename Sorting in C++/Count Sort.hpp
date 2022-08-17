#include <vector>
using std::vector;
namespace Ki
{
    void CountSort(vector<long long> &arr, long long &n)
    {
        long long m = arr[0];
        for (long long i = 0; i < n; i++)
        {
            m = (m > arr[i]) ? m : arr[i];
        }
        long long count[m + 1] = {0};
        for (long long i = 0; i < n; i++)
        {
            count[arr[i]]++;
        }
        for (long long i = 1; i <= m; i++)
        {
            count[i] += count[i - 1]; // printf("%d ",count[i]);
        }
        // printf("\n");
        long long output[n];
        for (long long i = 0; i < n; i++)
        {
            output[--count[arr[i]]] = arr[i];
        }
        for (long long i = 0; i < n; i++)
        {
            arr[i] = output[i];
        }
    }
}

/*int main()
{
    long long n;
    // printf("Enter size of array: ");
    cin >> n;
    long long arr[n];
    // printf("Enter elements of array: ");
    for (long long i = 0; i < n; i++)
        cin >> arr[i];
    countsort(arr, n);
    for (long long i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}*/