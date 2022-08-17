//#include<stdafx.h>
#include "test/InputHandler.hpp"
#include "C++ Handler.hpp"

using std::cin;
using std::cout;
using std::vector;

#define FastIO                             \
    std::ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define CHOICE                                                \
    cout << "Input specifier:\n1.Manual\n2.File\n3.Random\n"; \
    cin >> ch;

int main()
{
    cout << "\n";
    long long a, n = 0;
    int ch;

    Ki::InputChoice(3);

    (void)!freopen("test/Input Data.txt", "r", stdin);
    //(void)!freopen("test/Output Data.txt","w",stdout);

    vector<long long> vec, temp;
    while (cin >> a)
    {
        vec.push_back(a);
    }
    n = vec.size();
    temp = vec;

    cout << "\n\n";

    Ki::CPPSort(vec, n, temp);

    return 0;
}