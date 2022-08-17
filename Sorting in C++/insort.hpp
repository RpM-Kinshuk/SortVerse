void insort(long long* arr, long long n)
{
    for (long long i = 1; i < n; i++)
    {
        long long curr = arr[i];
        long long j = i - 1;
        while (j >= 0 && curr < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = curr;
    }
}