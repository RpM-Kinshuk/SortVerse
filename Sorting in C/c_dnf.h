#ifndef customswp
#include "swp.h"
#endif

void C_DNFSort(long long *arr, long long n)
{
    long long low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr + low, arr + mid);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else // if arr[mid]==2
        {
            swap(arr + mid, arr + high);
            high--;
        }
    }
}