#include <iostream>
#include <string>

using namespace std;

void reversString(string takeString)
{
    int num = takeString.length();
    for (int i = 0; i < num/2; i++)
    {
        // cout<<num;
        swap(takeString[i], takeString[num - i - 1]);
    }
    cout<<takeString;
}

int main()
{
    string input;
    getline(cin, input);
    reversString(input);

    return 0;
}