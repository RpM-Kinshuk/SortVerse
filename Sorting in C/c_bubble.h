#ifndef customswp
#include "swp.h"
#endif

void C_Bubble(long long arr[], long long n)
{
    long long i, j;
    for (i = 0; i < n - 1; i++)
    {
        bool swcnt = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr + j, arr + i);
                swcnt = 1;
            }
        }
        if (swcnt == 0)
            break;
    }
}