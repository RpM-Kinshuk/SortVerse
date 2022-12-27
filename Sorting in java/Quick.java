package qpack;
public class Quick
{
 partition (long a[], long start,long end)  
{  
    long pivot = a[end]; 
    long i = (start - 1);  
  
    for (long j = start; j <= end - 1; j++)  
    {   
        if (a[j] < pivot)  
        {  
            i++;  
            long t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    long t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}   

void quick(long a[], long start, long end)
{  
    if (start < end)  
    {  
        long p = partition(a, start, end);
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  
} 
/*void printArr(long a[], long n)  
{  
    long i;  
    for (i = 0; i < n; i++)  
        System.out.print(a[i] + " ");  
} */