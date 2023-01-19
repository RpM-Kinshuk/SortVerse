public class Heap {
    public void heapify(int arr[], int n, int i) {
        int mx = i;
        int lcl = 2 * i + 1;
        int rcl = 2 * i + 2;

        if (lcl < n && arr[lcl] > arr[mx]) {
            mx = lcl;
        }

        if (rcl < n && arr[rcl] > arr[mx]) {
            mx = rcl;
        }

        if (mx != i) {
            int temp = arr[i];
            arr[i] = arr[mx];
            arr[mx] = temp;

            heapify(arr, n, mx);
        }
    }

    public void HeapSort(int arr[], int n) {
        for (int i = n / 2; i >= 0; i--) {
            heapify(arr, n, i);
        }

        for (int i = n - 1; i > 0; i--) {
            int temp = arr[i];
            arr[i] = arr[0];
            arr[0] = temp;
            heapify(arr, i, 0);
        }
    }
}