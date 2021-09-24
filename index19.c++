#include <iostream>

using namespace std;

int main()
{
    char ch = 65, n = 25, b = 24;
    for (int j = 0; j <= n; j++)
    {

        for (int i = 0; i <= b; i++)
        {
            cout << " ";
        }
        for (int i = 0; i <= j; i++)
        {
            cout << "* ";
        }
        ch++;
        cout << endl;
        b--;
    }

    return 0;
}