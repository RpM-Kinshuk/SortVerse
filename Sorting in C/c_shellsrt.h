void C_ShellSrt(long long *v, long long n)
{
    for (long long sp = n / 2; sp > 0; sp /= 2)
    {
        for (long long i = sp; i < n; i++)
        {
            long long tmp = v[i];
            long long j = 0;
            for (j = i; j >= sp && v[j - sp] > tmp; j -= sp)
            {
                v[j] = v[j - sp];
            }
            v[j] = tmp;
        }
    }
}