#include <iostream>

using namespace std;

class binary
{
private:
    string s;
    void CheckBinary(void);

public:
    void EnterNum(void);
    void reversBinary(void);
    void display(void);
};

void binary ::EnterNum(void)
{
    cout << "Enter a number : ";
    cin >> s;
}
void binary ::CheckBinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '1' && s.at(i) != '0')
        {
            cout << "Your number is not a binary number" << endl;
            exit(0);
        }
    }
}
void binary::reversBinary(void)
{
    CheckBinary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}
void binary::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    binary b;
    b.EnterNum();
    b.reversBinary();
    b.display();
    return 0;
}
