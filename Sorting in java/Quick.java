package Sorting_in_Java;
public class Quick
{
    public int partition(int a[], int start, int end) {
        int pivot = a[end];
        int i = (start - 1);

        for (int j = start; j <= end - 1; j++) {
            if (a[j] < pivot) {
                i++;
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        int t = a[i + 1];
        a[i + 1] = a[end];
        a[end] = t;
        return (i + 1);
    }

    public void quicksort(int a[], int start, int end) {
        if (start < end) {
            int p = partition(a, start, end);
            quicksort(a, start, p - 1);
            quicksort(a, p + 1, end);
        }

    }
} 
/*void printArr(long a[], long n)  
{  
    long i;  
    for (i = 0; i < n; i++)  
        System.out.print(a[i] + " ");  
} */