#include <iostream>

using namespace std;

class a;
class b
{
    int data;
    friend void dataEchange(a &, b &);

public:
    void handover(int x)
    {
        data = x;
    }
    void display(void)
    {
        cout << "b" << data << endl;
    }
};

class a
{
    int data2;

    friend void dataEchange(a &, b &);

public:
    void handover(int y)
    {
        data2 = y;
    }
    void display(void)
    {
        cout << "a" << data2;
    }
};

void dataEchange(a &y, b &x)
{
    int temp;
    temp = y.data2;
    y.data2 = x.data;
    x.data = temp;
}

int main()
{
    a d1;
    b d2;
    d1.handover(5);
    d2.handover(6);
    d1.display();
    cout << endl;
    d2.display();

    // display();
    return 0;
}