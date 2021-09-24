#include <iostream>

using namespace std;

class A
{
public:
    void display()
    {
        cout << "Class A";
    }
};
class B : public A
{
public:
    // void display()
    // {
    //     cout << "Class B";
    // }
};

int main()
{
    B b;
    b.display();
    return 0;
}