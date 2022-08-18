#include <stdio.h>
void bubble(int arr[],int s)
{
    int i=0,j=0,temp=0;
    for(i=0;i<s-1;i++)
    {
        for(j=0;j<s-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(i=0;i<s;i++)
    {
        printf("%d ",arr[i]);
    }
}
void selection(int arr[],int s)
{
    int i=0,j=0,temp=0;
    for(i=1;i<s;i++)
    {
        for(j=0;j<s;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(i=0;i<s;i++)
    {
        printf("%d ",arr[i]);
    }
}
void insertion(int a[], int n)   
{  
    int i, j, temp;  
    for (i = 1; i < n; i++) 
    {  
        temp = a[i];  
        j = i - 1;  
        while(j>=0&&(temp<=a[j]))    
        {       
            a[j+1] = a[j];     
            j = j-1;    
        }    
        a[j+1] = temp;    
    } 
     for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    } 
}