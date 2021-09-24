#include <iostream>

using namespace std;

class cons
{
    int num;

public:
    cons()
    {
        num = 0;
    }
    cons(int number)
    {
        num = number;
        cout << num<<endl;
    }
    cons(cons &o)
    {
        cout << "copy constractor is invoke" << endl;
        num = o.num;
    }
};

int main()
{
    cons a(20);
    cons a1(a);

    return 0;
}