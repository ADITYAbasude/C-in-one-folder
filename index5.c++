#include <iostream>

using namespace std;

class emp
{
public:
    int num;
    void table(int num)
    {
        for (int i = 0; i <= 10; i++)
        {
            cout << num << " x " << i << " = " << num * i<<endl;

        }
    }
};

int main()
{
    emp mytable;
    mytable.table(5);
    return 0;
}