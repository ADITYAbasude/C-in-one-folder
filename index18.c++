// #include <iostream>

// using namespace std;

// int main()
// {
//     int *arr, dup, n, sum = 0;
//     cin >> n;
//     arr = (int *)malloc(n * sizeof(int));
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     dup = arr[0];
//     for (int i = 0; i < n; i++)
//     {

//         if (arr[i] >= dup)
//         {
//             dup = arr[i];
//             sum += 1;
//         }
//     }
//     cout << sum;

//     return 0;
// }

#include <iostream>

int main()
{
    int c, n, max = 0;
    std::cin.ignore();
    while (std::cin >> n)
        max < n ? c = !!(max = n) : c += max == n;
    std::cout << c;
    return 0;
}