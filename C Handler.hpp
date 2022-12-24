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
    void CSort(vector <long long> vec, long long n)
    {
        cout << "\n\n";
        cout << "~~~~~~~~~~~~~ Sorting with C ~~~~~~~~~~~~~\n\n";
        long long *temp = tmp::vectorray(vec, n);
        std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
        c_insertion(temp, n);
        std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
        cout << "> Insertion Sort: " << duration << " microseconds\n\n";
        free(temp); temp = tmp::vectorray(vec, n);

        ClockStart
            c_selectsrt(temp, n);
        ClockEnd
            duration = FindDuration;
        cout << "> Selection Sort: " << duration << " microseconds\n\n";
        free(temp); temp = tmp::vectorray(vec, n);

        ClockStart
            c_bubble(temp, n);
        ClockEnd
            duration = FindDuration;
        cout << "> Bubble Sort: " << duration << " microseconds\n\n";
        free(temp); temp = tmp::vectorray(vec, n);

        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    }
}