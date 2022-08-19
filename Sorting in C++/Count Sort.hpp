#include <vector>
using std::vector;
namespace Ki
{
    void CountSort(vector<long long> &arr, long long &n)
    {
        long long mx = arr[0], mn = arr[0];
        for (long long i = 0; i < n; i++)
        {
            mx = (mx > arr[i]) ? mx : arr[i];
            mn = (mn < arr[i]) ? mn : arr[i];
        }
        long long range = mx - mn + 1;
        vector<long long> count(range, 0);
        for (long long i = 0; i < n; i++)
        {
            count[arr[i] - mn]++;
        }
        for (long long i = 1; i < range; i++)
        {
            count[i] += count[i - 1]; // printf("%d ",count[i]);
        }
        // printf("\n");
        vector<long long> output(n);
        for (long long i = 0; i < n; i++)
        {
            output[--count[arr[i] - mn]] = arr[i];
        }
        /*for (long long i = 0; i < n; i++)
        {
            arr[i] = output[i];
        }*/
        arr = output;
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