#include <vector>
using std::vector;
namespace tmp
{
    template <typename T>
    T *vectorray(vector<T> vec, long long n)
    {
        T *temp = new T[n];
        for (long long i = 0; i < n; i++)
        {
            temp[i] = vec[i];
        }
        return temp;
    }
    template <typename T>
    vector<T> arraytovec(T *temp, long long n)
    {
        vector<T> vec;
        for (long long i = 0; i < n; i++)
        {
            vec.push_back(temp[i]);
        }
        return vec;
    }
}