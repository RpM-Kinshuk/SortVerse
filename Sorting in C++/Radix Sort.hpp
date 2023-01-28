#include <vector>
using std::vector;

namespace tmp
{
    void CountSort(vector<long long> &v, long long &n, int &dig)
    {
        vector <long long> output(n);
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
        v = output;
    }

    long long Max(vector<long long> &v, long long &n)
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
}

namespace Ki
{
    void RadixSort(vector <long long> &v, long long n)
    {
        long long mx = tmp::Max(v,n);
        for(int dig = 1; mx/dig > 0; dig *= 10)
        {
            tmp::CountSort(v,n,dig);
        }
    }
}
