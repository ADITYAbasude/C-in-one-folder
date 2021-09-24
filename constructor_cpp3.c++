#include <iostream>

using namespace std;

class simpleInterest
{
private:
    int p, year;
    float r;

public:
    simpleInterest(int x, int y, float i);
    void show (void){
        float result;
        result = (p * r * year)/100;
        cout<<"Your amount with interest is : "<<result;
    }
};

simpleInterest::simpleInterest(int x, int y, float i)
{
    p = x;
    year = y;
    r= i;

}

int main()
{
    simpleInterest si(60000 , 6 , 3);
    si.show();
    return 0;
}