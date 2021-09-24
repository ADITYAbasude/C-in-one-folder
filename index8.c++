#include <iostream>

using namespace std;

class complex
{
    int a, b;
    friend complex sumComple(complex o1 , complex o2);


public:
    void setnumber(int a1, int b1)
    {
        a =a1;
        b =b1;
    }
    void printnumber(){
        cout<<"Your number is "<<a<<" and "<<b<<"i"<<endl;                      
    }
};

complex sumComple(complex o1 , complex o2){
    complex o3;
    o3.setnumber((o1.a + o2.a)  , (o1.b + o2.b));
    return o3;
}


int main()
{
    complex c1 , c2 , c3;
    c1.setnumber(1,4);  
    c1.printnumber();

    c2.setnumber(1,4);
    c2.printnumber();

    c3 = sumComple(c1,c2);
    c3.printnumber();
    return 0;
}