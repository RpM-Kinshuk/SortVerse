#include <vector>
using std::vector;

namespace Ki
{
    void heapify(vector<long long> &v, long long n, long long i)
    {
        long long mx = i;
        long long lcl = 2 * i + 1;
        long long rcl = 2 * i + 2;

        if (lcl < n && v[lcl] > v[mx])
        {
            mx = lcl;
        }

        if (rcl < n && v[rcl] > v[mx])
        {
            mx = rcl;
        }

        if (mx != i)
        {
            std::swap(v[mx], v[i]);
            heapify(v, n, mx);
        }
    }

    void HeapSort(vector<long long> &v, long long n)
    {
        for (long long i = n / 2; i >= 0; i--)
        {
            heapify(v, n, i);
        }

        for (long long i = n - 1; i > 0; i--)
        {
            std::swap(v[0], v[i]);
            heapify(v, i, 0);
        }
    }
}