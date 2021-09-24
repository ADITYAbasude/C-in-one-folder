#include <iostream>

using namespace std;

class a
{
public:
    void display(void)
    {

        cout << "Class a is invoked";
    }
};

class b
{
public:
    a a1;
    void d(void)
    {

        a1.display();
    }
};

int main()
{
    b B;
    B.d();
    return 0;
}