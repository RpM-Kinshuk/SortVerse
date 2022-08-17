//#include<stdafx.h>
#include "Sorting in C++/insort.hpp"
#include "Sorting in C++/bubblesort.hpp"
#include "Sorting in C++/countsort.hpp"
#include "Sorting in C++/DNFSort.hpp"
#include "Sorting in C++/mergesort.hpp"
#include "Sorting in C++/qusort.hpp"
#include "Sorting in C++/selsort.hpp"
#include "Sorting in C++/wavesort.hpp"
#include <bits/stdc++.h>

int main()
{
    long long arr[] = {1, 7, 8, 4, 3, 6, 3, 2, 5, 2, 4, 4, 2};
    long long n = sizeof(arr) / sizeof(long long);
    std::sort(&arr[0],&arr[n]);
    for (long long i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    return 0;
}