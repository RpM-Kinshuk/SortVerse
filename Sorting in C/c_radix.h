void CountSort(long long *v, long long n, int dig)
    {
        long long output [n];
        long long i, count[20] = {0};
        for(i=0;i<n;i++)
        {
            count[(v[i]/dig)%10+10]++;
        }
        for(i=1;i<20;i++)
        {
            count[i] += count[i-1];
        }
        for(i=n-1;i>=0;i--)
        {
            output[count[(v[i]/dig)%10+10]-1] = v[i];
            count[(v[i]/dig)%10+10]--;
        }
        for(i=0;i<n;i++)
        v[i] = output[i];
    }

    long long Max(long long *v, long long n)
    {
        long long mx = v[0];
        for (int i = 1; i < n; i++)
        {
            if (v[i] > mx)
            {
                mx = v[i];
            }
        }
        return mx;
    }

    void C_RdxSrt(long long *v, long long n)
    {
        long long mx = Max(v,n);
        for(int dig = 1; mx/dig > 0; dig *= 10)
        {
            CountSort(v,n,dig);
        }
    }
