#include <vector>
using std::vector;
namespace Ki
{
    void SelectionSort(vector<long long> &arr, long long &n)
    {
        for (long long i = 0; i < n - 1; i++)
        {
            long long min_idx = i;
            for (long long j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[min_idx])
                {
                    min_idx = j;
                }
            }
            std::swap(arr[min_idx], arr[i]);
        }
    }
}