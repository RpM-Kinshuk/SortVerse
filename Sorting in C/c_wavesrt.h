#ifndef customswp
#include "swp.h"
#endif

void C_WaveSort(long long *arr, long long n)
{
    for (long long i = 1; i < n - 1; i += 2)
    {
        if (arr[i] > arr[i - 1])
        {
            swap(arr + i, arr + i - 1);
        }
        if (i < n - 1 && arr[i] > arr[i + 1])
        {
            swap(arr + i, arr + i + 1);
        }
    }
}