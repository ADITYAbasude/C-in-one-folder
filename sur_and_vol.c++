#include <iostream>
#include <conio.h>
#include <math.h>

const float pi = 3.14159265; //pi value
using namespace std;

class chose_surfaceandVolume;

struct lbhr
{
    float l;
    float b;
    float h;
    float r;
} val;

float cuboid()
{
    int chose_underOption;
    cout << "select : ";
    cin >> chose_underOption;
    if (chose_underOption == 1)
    {

        cout << "Lenght : ";
        cin >> val.l;
        cout << "Breadth : ";
        cin >> val.b;
        cout << "Height : ";
        cin >> val.h;
        float sum = 2 * val.l * val.b + 2 * val.b * val.h + 2 * val.h * val.l;
        return sum;
    }
    else if (chose_underOption == 2)
    {
        cout << endl
             << "Lenght : ";
        cin >> val.l;
        cout << "Breadth : ";
        cin >> val.b;
        cout << "Height : ";
        cin >> val.h;
        float sum = 2 * val.h * val.l + 2 * val.h * val.b;
        return sum;
    }
    else if (chose_underOption == 3)
    {
        cout << endl
             << "Lenght : ";
        cin >> val.l;
        cout << "Breadth : ";
        cin >> val.b;
        cout << "Height : ";
        cin >> val.h;
        float sum = val.h * val.l * val.b;
        return sum;
    }
    else
    {
        cout << "Enter a valid number ";
    }
}

// -----------------------------------cube--------------------------------
float cube()
{
    int chose_underOption;
    cout << "select : ";
    cin >> chose_underOption;
    if (chose_underOption == 1)
    {

        cout << "Lenght : ";
        cin >> val.l;
        float sum = val.l * val.l * 6;
        return sum;
    }
    else if (chose_underOption == 2)
    {
        cout << endl
             << "Lenght : ";
        cin >> val.l;
        float sum = val.l * val.l * 4;
        return sum;
    }
    else if (chose_underOption == 3)
    {
        cout << endl
             << "Lenght : ";
        cin >> val.l;
        float sum = val.l * val.l * val.l;
        return sum;
    }
    else
    {
        cout << "Enter a valid number ";
    }
}

// --------------------------------cylinder----------------------------------------------------

float cylinder()
{
    int chose_underOption;

    cout << "select : ";
    cin >> chose_underOption;
    if (chose_underOption == 1)
    {
        cout << "Height : ";
        cin >> val.h;
        cout << "Radius : ";
        cin >> val.r;
        float sum = (2 * pi * val.h * (val.h + val.r));
        return sum;
    }
    else if (chose_underOption == 2)
    {
        cout << endl
             << "Height : ";
        cin >> val.h;
        cout << "Radius : ";
        cin >> val.r;
        float sum = (2 * pi * val.h * val.r);
        return sum;
    }
    else if (chose_underOption == 3)
    {
        cout << endl
             << "Height : ";
        cin >> val.h;
        cout << "Radius : ";
        cin >> val.r;
        float sum = (pi * val.h * val.r * val.r);
        return sum;
    }
    else
    {
        cout << "Enter a valid number ";
    }
}

// --------------------------------cone----------------------------------------------------

float cone()
{
    int chose_underOption;

    cout << "select : ";
    cin >> chose_underOption;
    if (chose_underOption == 1)
    {
        cout << "Lenght : ";
        cin >> val.l;
        cout << "Radius : ";
        cin >> val.r;
        float sum = (pi * val.r * (val.l + val.r));
        return sum;
    }
    else if (chose_underOption == 2)
    {
        cout << endl
             << "Lenght : ";
        cin >> val.l;
        cout << "Radius : ";
        cin >> val.r;
        float sum = (pi * val.l * val.r);
        return sum;
    }
    else if (chose_underOption == 3)
    {
        cout << endl
             << "Height : ";
        cin >> val.h;
        cout << "Radius : ";
        cin >> val.r;
        float sum = (pi * val.h * val.r * val.r) / 3;
        return sum;
    }
    else
    {
        cout << "Enter a valid number ";
    }
}
// --------------------------------sphere----------------------------------------------------

float sphere()
{
    int chose_underOption;

    cout << "select : ";
    cin >> chose_underOption;
    if (chose_underOption == 1)
    {
        cout << "Radius : ";
        cin >> val.r;
        float sum = (4 * pi * val.r * val.r);
        return sum;
    }
    else if (chose_underOption == 3)
    {
        cout << endl
             << "Height : ";
        cin >> val.h;
        cout << "Radius : ";
        cin >> val.r;
        float sum = (pi * val.r * val.r * val.r) * 4 / 3;
        return sum;
    }
    else
    {
        cout << "Enter a valid number ";
    }
}
// --------------------------------hemisphere----------------------------------------------------

float hemisphere()
{
    int chose_underOption;

    cout << "select : ";
    cin >> chose_underOption;
    if (chose_underOption == 1)
    {
        cout << "Radius : ";
        cin >> val.r;
        float sum = (3 * pi * val.r * val.r);
        return sum;
    }
    else if (chose_underOption == 2)
    {
        cout << "Radius : ";
        cin >> val.r;
        float sum = (2 * pi * val.r * val.r);
        return sum;
    }
    else if (chose_underOption == 3)
    {

        cout << "Radius : ";
        cin >> val.r;
        float sum = (pi * val.r * val.r * val.r) * 2 / 3;
        return sum;
    }
    else
    {
        cout << "Enter a valid number ";
    }
}

// ---------------------------------Shape selector----------------------------------------------
class chose_surfaceandVolume
{
private:
    int chose_num;                                                                         //select the which shape you want to be calculet
    string shape_name[6] = {"Cuboid", "Cube", "Cylinder", "Cone", "Sphere", "Hemisphere"}; // all shape name in array
    string contant[3] = {"1). Total Surface Area", "2). Curved Surface Area", "3). Volume"};
    // friend void underDisplay(void);

public:
    void option_display_first(void)
    {
        cout << "1). Cuboid" << endl;
        cout << "2). Cube" << endl;
        cout << "3). Cylinder" << endl;
        cout << "4). Cone" << endl;
        cout << "5). Sphere" << endl;
        cout << "6). Hemisphere" << endl
             << endl;
    }
    // -----------------------------------taking a input select a shape---------------------
    void scan(void)
    {

        cout << "Enter your chose : ";
        cin >> chose_num;
        if (chose_num <= 6 && chose_num >= 1)
        {
            for (int i = 0; i < 6; i++)
            {
                if (chose_num == i)
                {
                    cout << "You have selected : " << shape_name[i - 1] << endl
                         << endl;
                }
            }
        }
        else
        {
            cout << "Entered a valid number" << endl;
        }
        for (int i = 0; i < 3; i++)
        {
            cout << contant[i] << endl;
        }

        if (chose_num == 1)
        {
            cout << cuboid() << endl;
        }
        else if (chose_num == 2)
        {
            cout << cube() << endl;
        }
        else if (chose_num == 3)
        {
            cout << cylinder() << endl;
        }
        else if (chose_num == 4)
        {
            cout << cone() << endl;
        }
        else if (chose_num == 5)
        {
            cout << sphere() << endl;
        }
        else if (chose_num == 6)
        {
            cout << hemisphere() << endl;
        }
    }
};

// ---------------------------------------main faction-------------------------
int main()
{
    // clrscr;
    int repet;
    do
    {
        chose_surfaceandVolume sAV;
        sAV.option_display_first();
        sAV.scan();

        cout << "Enter a 0 to run again this programe : ";
        cin >> repet;
        cout << endl;
    } while (repet == 0);

    return 0;
}