#include <iostream>

using namespace std;

float master(int a, float b = 1.1)
{
    return a*b;
}

int main()
{
    cout<<master(10000);
    return 0;
}