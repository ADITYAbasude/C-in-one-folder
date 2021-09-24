#include <iostream>

using namespace std;

class cons
{
public:
    cons(void);
};

cons::cons(void)
{
    cout << "Hello world";
}

int main()
{
    cons cl;
    return 0;
}