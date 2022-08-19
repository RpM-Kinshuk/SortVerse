#include <iostream>
#include <time.h>
#include <fstream>

using std::cin;
using std::cout;

namespace tmp
{
    // random dataset generator
    void random()
    {
        std::ofstream file("test/Input Data.txt");
        long long n = 1e4;
        srand((unsigned)time(NULL));
        for (long long i = 0; i < n; i++)
        {
            file << rand() << " ";
        }
        file.close();
    }

    // manual input
    void manual()
    {
        long long n;
        cout << "Enter size of data: ";
        cin >> n;
        cout << "Enter data: ";
        std::ofstream file("test/Input Data.txt");
        for (long long i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            file << a << " ";
        }
        file.close();
    }
}

namespace Ki
{
    // input from file
    void InputChoice(int ch)
    {
        if (ch == 1)
            tmp::manual();
        else if (ch == 2)
            ; // do nothing, main.cpp will handle this
        else
            tmp::random();
    }
}