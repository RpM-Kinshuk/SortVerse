#include <vector>
using std::vector;
namespace Ki
{
    void DNFSort(vector<long long> &arr, long long &n)
    {
        long long low = 0, mid = 0, high = n - 1;
        while (mid <= high)
        {
            if (arr[mid] == 0)
            {
                std::swap(arr[low], arr[mid]);
                mid++;
                low++;
            }
            else if (arr[mid] == 1)
            {
                mid++;
            }
            else // if arr[mid]==2
            {
                std::swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
}

/*int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
        cin >> arr[i];
    DNSort(arr, n);
    for (long long i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}*/
