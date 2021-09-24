#include <iostream>
#include <cmath>
using namespace std;
void update(int *a, int *b)
{
    cout << *a + *b << endl;
    cout << abs(*a - *b) << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    return 0;
}