#include <iostream>

using namespace std;

class complex;

class complexTwo
{
public:
    int sumofcomplex(complex, complex);
};

class complex
{
    int a, b;

    friend class complexTwo;

public:
    void setnumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void printnumber()
    {
        cout << "Your number is " << a << " and " << b << "i" << endl;
    }
};

int complexTwo::sumofcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 4);
    o2.setnumber(5, 7);
    complexTwo o3;

    int num = o3.sumofcomplex(o1, o2);

    cout << num;

    return 0;
}