//#include<stdafx.h>
#include "test/InputHandler.hpp"
#include "C++ Handler.hpp"
#include "C Handler.hpp"

using std::cin;
using std::cout;
using std::vector;

#define FastIO                             \
    std::ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define CHOICE                                                \
    cout << "//Available Inputs:\n1.Manual\n2.File\n3.Random\n\nInput specifier: "; \
    cin >> a;

int main()
{
    cout << "\n";
    long long a = 3, n = 0;

    CHOICE
    Ki::InputChoice(a);

    (void)!freopen("test/Input Data.txt", "r", stdin);
    //(void)!freopen("test/Output Data.txt","w",stdout);

    vector<long long> vec, temp;
    while (cin >> a)
    {
        vec.push_back(a);
    }
    n = vec.size();
    temp = vec;

    Ki::CPPSort(vec, n, temp);

    Ki::CSort(vec, n);

    system("python Python_Handler.py");
    
    system("javac Java_Handler.java");
    system("java Java_Handler");
    
    return 0;
}