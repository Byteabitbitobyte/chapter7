#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;
using std::setprecision;
using std::ios;

const float pi = 3.145;


double area, length, width, leg_one, leg_two, a, b, c, area_rectangle, area_circle, radius_circle, area_triangle;
int main_menu;

int main()
{
    
    cout << "--Main menu-- \n" << "1) Calculate Area \n" << "2) Calculate Volume\n" << endl;

    
    cin >> main_menu;
    switch(main_menu)
    {
case 1:
    cout << "--Area menu-- \n" << "a) Rectangle \n" << "b) Circle\n" << "c) Right Triangle" << endl;
    break;
case 2:
    cout << "--Volume menu-- \n" << "a) Cylinder \n" << "b) Sphere\n" << endl;
    break;
    }

    cin >> area;

    
        if (area == a)
        {
            cout << "Please enter length of rectangle" << endl;
            cin >> length;
            cout << "Please enter width of rectangle" << endl;
            cin >> width;
            area_rectangle = length * width;
            cout << area_rectangle << endl;
        }

        else if (area == b)
        {
            cout << "Please enter the radius of the circle" << endl;
            cin >> radius_circle;
            area_circle = (radius_circle * radius_circle) * pi;
            cout << area_rectangle << endl;
        }


        else (area == c)
        {
            cout << "Please enter one leg of the right triangle" << endl;
            cin >> leg_one;
            cout << "Please enter the other leg of the right triangle" << endl;
            cin >> leg_two;
            area_triangle = (leg_one * leg_two) / 2;
            cout << area_triangle << endl;
        }

    

        switch (area)
        {
            case a;
                cout << "Please enter length of rectangle" << endl;
                cin >> length;
                cout << "Please enter width of rectangle" << endl;
                cin >> width;
                area_rectangle = length * width;
                cout << area_rectangle << endl;
        }
  



        return 0;
}

