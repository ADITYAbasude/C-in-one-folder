#include <iostream>

using namespace std;

int main()
{
    int mat[3][3], mat2[3][3], mat3[3][3]  ;

    cout << "Enter a numbers for mat1 :  \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
        // cout << endl;
    }

    cout << "Enter a numbers for mat2 : \n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat2[i][j];
        }
        // cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat3[i][j] = 0;
            for (int z = 0; z < 3; z++)
            {
                mat3[i][j] += mat[i][z] * mat2[z][j];
            }
        }

        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<mat3[i][j]<<" ";
        }
        
        cout << endl;
    }
    
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
//     cout << "enter the number of row=";
//     cin >> r;
//     cout << "enter the number of column=";
//     cin >> c;
//     cout << "enter the first matrix element=\n";
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//     cout << "enter the second matrix element=\n";
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             cin >> b[i][j];
//         }
//     }
//     cout << "multiply of the matrix=\n";
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             mul[i][j] = 0;
//             for (k = 0; k < c; k++)
//             {
//                 mul[i][j] += a[i][k] * b[k][j];
//             }
//         }
//     }
//     //for printing result
//     for (i = 0; i < r; i++)
//     {
//         for (j = 0; j < c; j++)
//         {
//             cout << mul[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }