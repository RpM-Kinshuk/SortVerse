package Sorting_in_Java;
public class Quick {
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

    public void insSort(int arr[], int l, int r) {
        int i, j;
        for (i = l + 1; i <= r; i++) {
            int curr = arr[i];
            j = i;
            while (j > l && curr < arr[j-1]) {
                arr[j] = arr[j-1];
                j--;
            }
            arr[j] = curr;
        }
    }

    public void quicksort(int a[], int start, int end) {
        if (start < end) {
            int p = partition(a, start, end);
            quicksort(a, start, p - 1);
            quicksort(a, p + 1, end);
        }

    }

    public int Hoarepartition(int a[], int low, int high) {
        int pivot = a[low];
        int i = low - 1;
        int j = high + 1;
        while (true) {
            do {
                i++;
            } while (a[i] < pivot);

            do {
                j--;
            } while (a[j] > pivot);

            if (i >= j) {
                return j;
            }
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    public void HybridQuickSort(int arr[], int l, int r) {
        while (l < r) {
            if (r - l + 1 < 10) {
                insSort(arr, l, r);
                break;
            } 
            else {
                int pi = Hoarepartition(arr, l, r);
                if (pi - l < r - pi) {
                    HybridQuickSort(arr, l, pi - 1);
                    l = pi + 1;
                }
                else {
                    HybridQuickSort(arr, pi + 1, r);
                    r = pi - 1;
                }
            }
        }
    }
}
