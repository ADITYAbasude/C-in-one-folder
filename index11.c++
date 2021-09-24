#include <iostream>
#include <string>
using namespace std;

int FirstFactorial(int num)
{
    int sum;
    if (num < 1)
    {
        return 1;
    }
    else
    {

        return num * FirstFactorial(num - 1);
    }
}

int main(void)
{

    int takeNum, output;
    cout << "Enter a number : ";
    cin >> takeNum;
    output = FirstFactorial(takeNum);
    cout << output;
    return 0;
}