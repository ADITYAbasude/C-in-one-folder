#include <iostream>

using namespace std;

// struct student
// {

//     int amount;
//     string name;
// } s1;
union student
{

    int amount;
    string name;
} s1;

int main()
{
    cin >> s1.name;
    cin >> s1.amount;
    cout << s1.name<<"\n";
    cout << s1.amount;

    return 0;
}