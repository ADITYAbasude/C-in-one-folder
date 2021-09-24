#include <iostream>

using namespace std;

int main()
{
    string arr[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int num;
    cin >> num;
    if (num < 10)
    {
        cout << arr[num - 1];
    }
    else
    {
        cout << "Greater than 9";
    }

    return 0;
}