#include <iostream>

using namespace std;

int main()
{

    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
   
        for (int k = 0; k < 3; k++)
        {
            cin >> arr[i][k];
        }
    }

    for (int i = 0; i < 3; i++)
    {

        for (int k = 0; k < 3; k++)
        {
            cout << arr[i][k];
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}