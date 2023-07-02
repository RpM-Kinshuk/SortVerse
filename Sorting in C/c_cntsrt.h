#include <stdlib.h>
#include <string.h>

void C_CountSrt(long long *arr, long long &n)
{
    long long mx = arr[0], mn = arr[0];
    for (long long i = 0; i < n; i++)
    {
        mx = (mx > arr[i]) ? mx : arr[i];
        mn = (mn < arr[i]) ? mn : arr[i];
    }
    long long range = mx - mn + 1;
    long long *count = (long long *)calloc(range + 1, sizeof(*count));
    if (count == NULL)
        return;
    memset(count, 0, sizeof(count));
    for (long long i = 0; i < n; i++)
    {
        count[arr[i] - mn]++;
    }
    for (long long i = 1; i < range; i++)
    {
        count[i] += count[i - 1];
    }
    long long output[n];
    for (long long i = 0; i < n; i++)
    {
        output[--count[arr[i] - mn]] = arr[i];
    }
    free(count);
    arr = output;
}