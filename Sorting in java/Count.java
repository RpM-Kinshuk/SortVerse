package bpack;
/*import java.util.*;
class Count
{*/
public class Count
{
    void countSort(int arr[], int n) {
        int mx = arr[0], mn = arr[0];
        int f[] = new int[n];
        for (int i = 0; i < n; i++)
        {
            mx = (mx > arr[i]) ? mx : arr[i];
            mn = (mn < arr[i]) ? mn : arr[i];
        }
        int range = mx - mn + 1;
        int cnt[] = new int[range];
        for (int i = 0; i < n; i++)
        {
            cnt[arr[i] - mn]++;
        }
        for (int i = 1; i < range; i++)
        {
            cnt[i] += cnt[i - 1];
        }
        for (int i = n - 1; i >= 0; i--)
        {
            f[--cnt[arr[i] - mn]] = arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = f[i];
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
