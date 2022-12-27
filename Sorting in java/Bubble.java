package bpack;

public class Bubble
{
public void bubbleSort(long arr[],long n)
{
    long i=0;
    long j=0;
    long temp=0;
    for(i=0;i<n-1;i++)
    {
        int flag=0;
        for(j=0;j<n-i-1;j++)
        {
            if(arr[(int)j]>arr[(int)j+1])
            {
                temp=arr[(int)j];
                arr[(int)j]=arr[(int)j+1];
                arr[(int)j+1]=temp;

                flag=1;
            }
            if(flag==0)
            break;
        }
    }
}
}
