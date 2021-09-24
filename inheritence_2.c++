#include <iostream>

using namespace std;

class set_Emplyee_data
{
private:
    string name;
    int id;
    int salary;

public:
    string setname(string);
    int setid(int);
    int setsalary(int);
    void display(void)
    {
        cout << name << endl
             << id << endl
             << salary;
    }
};

string set_Emplyee_data::setname(string n)
{
    name = n;
    return name;
}

int set_Emplyee_data::setid(int i)
{
    id = i;
    return id;
}
int set_Emplyee_data::setsalary(int s)
{
    salary = s;
    return salary;
}

class display_emplyee : public set_Emplyee_data
{
public:
    string name = "jaggu";
    void setdata()
    {
        setname(name);
        setid(1);
        setsalary(20000);
    }
    void display1()
    {
        display();
    }
};

int main()
{
    display_emplyee emp;
    emp.setdata();
    emp.display1();
    return 0;
}