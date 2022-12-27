package ipack;
public class Insertion
{
void insertionSort(long arr[], long n)
    {
        long i,j;
        for (i = 1; i < n; i++)
        {
            long curr = arr[i];
            j = i - 1;
            while (j >= 0 && curr < arr[j])
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = curr;
        }
    }
}