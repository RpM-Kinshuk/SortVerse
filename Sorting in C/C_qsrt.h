#ifndef customswp
#include "swp.h"
#endif

long long C_Split(long long *arr, long long l, long long r)
{
    long long pivot = arr[r], i = l - 1;
    for (long long j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr + i, arr + j);
        }
    }
    swap(arr + i + 1, arr + r);
    return i + 1;
}

void C_InsSort(long long *arr, long long l, long long r)
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

long long C_Hoarepartition(long long *a, long long low, long long high)
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
        swap(a + i, a + j);
    }
}

void C_QuickSort(long long *arr, long long l, long long r)
{
    if (l < r)
    {
        long long pi = C_Split(arr, l, r);
        C_QuickSort(arr, pi + 1, r);
        C_QuickSort(arr, l, pi - 1);
    }
}

void C_HybridQSrt(long long *arr, long long l, long long r)
{
    while (l < r)
    {
        if (r - l + 1 < 10)
        {
            C_InsSort(arr, l, r);
            break;
        }
        else
        {
            long long pi = C_Hoarepartition(arr, l, r);
            if (pi - l < r - pi)
            {
                C_HybridQSrt(arr, l, pi - 1);
                l = pi + 1;
            }
            else
            {
                C_HybridQSrt(arr, pi + 1, r);
                r = pi - 1;
            }
        }
    }
}