#include "Sorting in C++/Wrap.hpp"
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
    void CPPSort(vector<long long> vec, long long n, vector<long long> temp)
    {
        cout << "~~~~~~~~~ Sorting with C++ ~~~~~~~~~\n\n";
        std::chrono::high_resolution_clock::time_point t1 = std::chrono::high_resolution_clock::now();
        std::sort(temp.begin(), temp.end());
        std::chrono::high_resolution_clock::time_point t2 = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();
        cout << "STD Sort: " << duration << " microseconds\n\n";
        temp = vec;

        ClockStart
            Ki::InsertionSort(temp, n);
        ClockEnd
            duration = FindDuration;
        temp = vec;
        cout << "Insertion Sort: " << duration << " microseconds\n\n";

        ClockStart
            Ki::MergeSort(temp, 0, n - 1);
        ClockEnd
            duration = FindDuration;
        temp = vec;
        cout << "Merge Sort: " << duration << " microseconds\n\n";

        ClockStart
            Ki::QuickSort(temp, 0, n - 1);
        ClockEnd
            duration = FindDuration;
        temp = vec;
        cout << "Quick Sort: " << duration << " microseconds\n\n";

        ClockStart
            Ki::SelectionSort(temp, n);
        ClockEnd
            duration = FindDuration;
        temp = vec;
        cout << "Selection Sort: " << duration << " microseconds\n\n";

        ClockStart
            Ki::CountSort(temp, n);
        ClockEnd
            duration = FindDuration;
        cout << "Counting Sort: " << duration << " microseconds\n\n";
        temp = vec;

        ClockStart
            Ki::BubbleSort(temp, n);
        ClockEnd
            duration = FindDuration;
        temp = vec;
        cout << "Bubble Sort: " << duration << " microseconds\n\n";

        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";
    }
}
// ClockStart
// Ki::HeapSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Heap Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::RadixSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Radix Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::BucketSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Bucket Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::ShellSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Shell Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::CombSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Comb Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::CycleSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Cycle Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::PigeonholeSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Pigeonhole Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::GnomeSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Gnome Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::BitonicSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Bitonic Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::PancakeSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Pancake Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::BogoSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Bogo Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::StoogeSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Stooge Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::TimSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Tim Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::SmoothSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Smooth Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::IntroSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Intro Sort: " << duration << " microseconds\n\n";

// ClockStart
// Ki::BlockSort(temp,n);
// ClockEnd
// duration = FindDuration; temp = vec;
// cout << "Block Sort: " << duration << " microseconds\n\n";