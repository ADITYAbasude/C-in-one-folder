#include <iostream>

using namespace std;

class cons
{
public:
    cons(int a){
        cout<<a<<endl;
    }
    cons(int a , int n){

        cout<<a<<" "<<n<<endl;
    }
};

int main()
{
    cons c(4);
    cons c1(5,6);
    return 0;
}