package Sorting_in_Java;
public class Selection {
    public void selectionSort(int arr[], int n) {
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
}