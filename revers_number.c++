#include <iostream>
=

using namespace std;

int main()
{
    int  n , r, sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    

    while (n!=0)
    {
        r = n%10;//4.5
        sum = sum*10 + r;//4
        n /=10;//

    }
    cout<<"Your reverse number is : "<<sum;
    
    return 0;
}