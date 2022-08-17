#include <iostream>
#include <vector>
using std::vector;
namespace Ki
{
    void BubbleSort(vector<long long> &arr, long long &n)
    {
        for (long long i = 0; i < n - 1; i++)
        {
            bool swcnt = 0;
            for (long long j = 0; j < n - i - 1; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    std::swap(arr[j], arr[j + 1]);
                    swcnt = 1;
                }
            }
            if (swcnt == 0)
                break;
        }
    }
}