#include <iostream>

using namespace std;

class table
{
    int num, num2;

public:
    void takeNum(void);
    void multipal(void);
};

void table ::takeNum(void)
{
    cout << "Take a number form first to multipal : ";
    cin >> num;
    cout << "to second number : ";
    cin >> num2;
}
void table::multipal(void)
{
    for (int i = num; i <= num2; i++)
    {
        for (int j = 0; j <= 10; j++)
        {

            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
        cout << endl;
    }
}

int main()
{
    table multi;
    multi.takeNum();
    multi.multipal();

    return 0;
}