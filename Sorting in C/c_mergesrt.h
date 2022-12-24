
void c_merge(long long *arr, long long l, long long mid, long long r)
{
    long long n1 = mid - l + 1;
    long long n2 = r - mid;
    long long a[n1], b[n2];
    for (long long i = 0; i < n1; i++)
        a[i] = arr[l + i];
    for (long long i = 0; i < n2; i++)
        b[i] = arr[mid + 1 + i];
    long long i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void C_MrgSrt(long long *arr, long long l, long long r)
{
    if (l < r)
    {
        long long mid = (l + r) / 2;
        C_MrgSrt(arr, l, mid);
        C_MrgSrt(arr, mid + 1, r);
        c_merge(arr, l, mid, r);
    }
}