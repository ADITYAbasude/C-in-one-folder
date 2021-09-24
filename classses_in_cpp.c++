// #include <iostream>

// using namespace std;

// class emp
// {
// public:
//     int a, b, c;
//     void setdata(int a1, int b1, int c1 );
//     void getdata(){
//         cout<<"the value of a is : "<<a<<endl;
//         cout<<"the value of b is : "<<b<<endl;
//         cout<<"the value of c is : "<<c<<endl;
//         // cout<<"the value of d is : "<<d<<endl;
//     }

// };

// void emp::setdata(int a1, int b1, int c1){
//     a = a1;
//     b = b1;
//     c = c1;

// }

// int main()
// {
//     emp aditya;
//     aditya.setdata(1,5,9);
//     aditya.getdata();
//     return 0;
// }

#include <iostream>

using namespace std;

class volume
{
public:
    int lenght;
    void voluemCube(int l);
    void printing()
    {
        cout << "The volume of cube is : " << lenght;
    }
};

void volume ::voluemCube(int l)
{
    lenght = (l * l * l);
}

int main()
{
    volume cube;
    cube.voluemCube(2);
    cube.printing();
    
    return 0;
}