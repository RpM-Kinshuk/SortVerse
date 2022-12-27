package spack;
public class Selection
{
void selectionSort(long arr[], long n)
    {
        long i,j;
        int temp=0;
        for ( i = 0; i < n - 1; i++)
        {
            for ( j = i + 1; j < n; j++)
            {
                if (arr[i] > arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
}