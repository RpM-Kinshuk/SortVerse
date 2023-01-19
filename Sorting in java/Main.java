import java.util.*;
/*import java.bpack.*;
import java.cpack;
import java.ipack;
import java.mpack;
import java.spack;*/
import bpack.*;

class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int arr[];
        arr = new int[] { 4, 5, 6, 8, 9, 1, 3, 0, 7, 2 };
        Bubble obj = new Bubble();
        obj.bubbleSort(arr, 10);
        int i;
        for (i = 0; i < 10; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
