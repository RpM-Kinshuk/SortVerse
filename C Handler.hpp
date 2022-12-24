#include "Sorting in C/c_wrap.hpp"
#include <iostream>
#include <chrono>
#include <algorithm>

using std::cin;
using std::cout;
using std::vector;

#define ClockStart t1 = std::chrono::high_resolution_clock::now();
#define ClockEnd t2 = std::chrono::high_resolution_clock::now();
#define FindDuration std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count()

namespace Ki
{
    int cmpfunc (const void * a, const void * b)
    {
        return ( *(long long*)a - *(long long*)b );
    }

    void CSort(vector <long long> vec, long long n)
    {
        cout << "\n\n";
        cout << "~~~~~~~~~~~~~ Sorting with C ~~~~~~~~~~~~~\n\n";
        long long *temp = tmp::vectorray(vec, n);
        std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
        qsort((void*)temp, n, sizeof(temp[0]), cmpfunc);
        std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
        cout << "> Inbuilt QSort: " << duration << " microseconds\n\n";
        free(temp); temp = tmp::vectorray(vec, n);

        ClockStart
            c_insertion(temp, n);
        ClockEnd
            duration = FindDuration;
        cout << "> Insertion Sort: " << duration << " microseconds\n\n";
        free(temp); temp = tmp::vectorray(vec, n);
        
        ClockStart
            C_MrgSrt(temp, 0, n-1);
        ClockEnd
            duration = FindDuration;
        cout << "> Merge Sort: " << duration << " microseconds\n\n";
        free(temp); temp = tmp::vectorray(vec, n);

        ClockStart
            C_QuickSort(temp, 0, n-1);
        ClockEnd
            duration = FindDuration;
        cout << "> Quick Sort: " << duration << " microseconds\n\n";
        free(temp); temp = tmp::vectorray(vec, n);

        ClockStart
            C_SelectSrt(temp, n);
        ClockEnd
            duration = FindDuration;
        cout << "> Selection Sort: " << duration << " microseconds\n\n";
        free(temp); temp = tmp::vectorray(vec, n);

        ClockStart
            C_CountSrt(temp, n);
        ClockEnd
            duration = FindDuration;
        cout << "> Counting Sort: " << duration << " microseconds\n\n";
        free(temp); temp = tmp::vectorray(vec, n);

        ClockStart
            C_Bubble(temp, n);
        ClockEnd
            duration = FindDuration;
        cout << "> Bubble Sort: " << duration << " microseconds\n\n";
        free(temp); temp = tmp::vectorray(vec, n);

        ClockStart
            C_HybridQSrt(temp, 0, n-1);
        ClockEnd
            duration = FindDuration;
        cout << "> Hybrid Quick Sort: " << duration << " microseconds\n\n";
        free(temp); temp = tmp::vectorray(vec, n);


        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    }
}