package cpack;
/*import java.util.*;
class Count
{*/
public class Count
{
void countSort( long arr[],long n)
{
     long i=0;
    long max=0;
    long f[]=new long [n];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    long cnt[]=new long [max+1];
     for(i=0;i<max;i++)
     {
        cnt[i]=0;
     }
    for(i=0;i<n;i++)
    {
        cnt[arr[i]]++;
    }
    for(i=1;i<max+1;i++)
    {
        cnt[i]=cnt[i]+cnt[i-1];
    }
    for(i=n-1;i>=0;i--)
    {
        f[--cnt[arr[i]]]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        arr[i]=f[i];
    }
}
}
/*public static void main(String args[])
{
    long arr[];
    arr=new int[]{0,5,3,8,4,3,5,9,2,0};
    Count obj=new Count();
    obj.countSort(arr,10);
    long i;
    System.out.println();
    for(i=0;i<10;i++)
    {
        System.out.print(arr[i]+" ");
    }
}
}*/
