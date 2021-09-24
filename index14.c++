#include <iostream>

using namespace std;

int main()
{
    string arr[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int num1, num2;
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++)
    {

        cout << ((i <= 9) ? arr[i-1] : ((i % 2 == 0) ? "even" : "odd")) << endl;
    }

    return 0;
}