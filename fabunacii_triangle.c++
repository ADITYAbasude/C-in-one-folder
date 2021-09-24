#include <iostream>

using namespace std;

int main()
{

    int a = 0, b = 1, c , s = 10;

    cout << a << endl
         << b << endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < s; j++)
        {
            cout << " ";
        }
        for (int z = 0; z < 10; z++)
        {

            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
        s--;
        cout<<endl;

    }

    return 0;
}