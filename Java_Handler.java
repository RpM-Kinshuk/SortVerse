import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InputStream;
import java.util.Scanner;
//import java.io.BufferedReader;
import java.io.FileReader;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Arrays;

public class Java_Handler {
    void bubbleSort(int arr[],int n)
    {
        for(int i=0;i<n-1;i++)
        {
            boolean flag=false;
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    flag=true;
                }
            }
            if(flag==false)
                break;
        }
    }

    void countSort(int arr[], int n) {
        int i = 0;
        int max = 0;
        int f[] = new int[n];
        for (i = 0; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        int cnt[] = new int[max + 1];
        for (i = 0; i < max; i++) {
            cnt[i] = 0;
        }
        for (i = 0; i < n; i++) {
            cnt[arr[i]]++;
        }
        for (i = 1; i < max + 1; i++) {
            cnt[i] = cnt[i] + cnt[i - 1];
        }
        for (i = n - 1; i >= 0; i--) {
            f[--cnt[arr[i]]] = arr[i];
        }
        for (i = 0; i < n; i++) {
            arr[i] = f[i];
        }

    }

    void insertionSort(int arr[], int n) {
        int i, j;
        for (i = 1; i < n; i++) {
            int curr = arr[i];
            j = i - 1;
            while (j >= 0 && curr < arr[j]) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = curr;
        }
    }

    void merge(int a[], int beg, int mid, int end) {
        int i, j, k;
        int n1 = mid - beg + 1;
        int n2 = end - mid;

        int LeftArray[] = new int[n1];
        int RightArray[] = new int[n2];

        for (i = 0; i < n1; i++)
            LeftArray[i] = a[beg + i];
        for (j = 0; j < n2; j++)
            RightArray[j] = a[mid + 1 + j];

        i = 0;
        j = 0;
        k = beg;

        while (i < n1 && j < n2) {
            if (LeftArray[i] <= RightArray[j]) {
                a[k] = LeftArray[i];
                i++;
            } else {
                a[k] = RightArray[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            a[k] = LeftArray[i];
            i++;
            k++;
        }

        while (j < n2) {
            a[k] = RightArray[j];
            j++;
            k++;
        }
    }

    void mergeSort(int a[], int beg, int end) {
        if (beg < end) {
            int mid = (beg + end) / 2;
            mergeSort(a, beg, mid);
            mergeSort(a, mid + 1, end);
            merge(a, beg, mid, end);
        }
    }

    int partition(int a[], int start, int end) {
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

    void quick(int a[], int start, int end) {
        if (start < end) {
            int p = partition(a, start, end);
            quick(a, start, p - 1);
            quick(a, p + 1, end);
        }

    }

    void selectionSort(int arr[], int n) {
        int i, j;
        int temp = 0;
        for (i = 0; i < n - 1; i++) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

    }

    public static void main(String[] args) {
        try {
            System.out.println("\n~~~~~~~~~~~~ Sorting with Java ~~~~~~~~~~~~\n");
            long start, end;
            System.setIn(new FileInputStream(new File("test/Input Data.txt")));
            // System.setOut(new PrintStream(new File("test/Output Data.txt")));
            ArrayList<Integer> dynarr = new ArrayList<>();
            try (Scanner sc = new Scanner(System.in)) {
                while (sc.hasNextInt()) {
                    dynarr.add(sc.nextInt());
                }
            }
            int n = dynarr.size();
            int[] arr = new int[n];
            int[] temp = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = dynarr.get(i);
                temp[i] = dynarr.get(i);
            }
            Java_Handler obj = new Java_Handler();

            start = System.nanoTime();
            Arrays.sort(temp);
            end = System.nanoTime();
            System.out.println("> Inbuilt Sort: " + ((end - start) / 1000) + " microseconds\n");

            for (long i = 0; i < n; i++) {
                temp[(int) i] = arr[(int) i];
            }

            start = System.nanoTime();
            obj.insertionSort(temp, n);
            end = System.nanoTime();
            System.out.println("> Insertion Sort: " + ((end - start) / 1000) + " microseconds\n");

            for (long i = 0; i < n; i++) {
                temp[(int) i] = arr[(int) i];
            }

            start = System.nanoTime();
            obj.mergeSort(temp, 0, n - 1);
            end = System.nanoTime();
            System.out.println("> Merge Sort: " + ((end - start) / 1000) + " microseconds\n");

            for (long i = 0; i < n; i++) {
                temp[(int) i] = arr[(int) i];
            }

            start = System.nanoTime();
            obj.quick(temp, 0, n - 1);
            end = System.nanoTime();
            System.out.println("> Quick Sort: " + ((end - start) / 1000) + " microseconds\n");

            for (long i = 0; i < n; i++) {
                temp[(int) i] = arr[(int) i];
            }

            start = System.nanoTime();
            obj.selectionSort(temp, n);
            end = System.nanoTime();
            System.out.println("> Selection Sort: " + ((end - start) / 1000) + " microseconds\n");

            for (long i = 0; i < n; i++) {
                temp[(int) i] = arr[(int) i];
            }

            start = System.nanoTime();
            obj.countSort(temp, n);
            end = System.nanoTime();
            System.out.println("> Counting Sort: " + ((end - start) / 1000) + " microseconds\n");

            for (long i = 0; i < n; i++) {
                temp[(int) i] = arr[(int) i];
            }

            start = System.nanoTime();
            obj.bubbleSort(arr, n);
            end = System.nanoTime();
            System.out.println("> Bubble Sort: " + ((end - start) / 1000) + " microseconds\n");

            for (long i = 0; i < n; i++) {
                temp[(int) i] = arr[(int) i];
            }

            System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}