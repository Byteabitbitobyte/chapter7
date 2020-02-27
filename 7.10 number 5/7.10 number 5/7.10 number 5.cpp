#include <iostream>
#include <iomanip>

using namespace std;
using std::setw;
using std::setprecision;
using std::ios;

const float pi = 3.145;


double  length, width, leg_one, leg_two, area_rectangle, area_circle, radius_circle, volume_cyl, area_triangle, radius_cyl, height_cyl;
int main_menu, area, volume;
float radius_sphere, volume_sph;

int main()
{
    
    cout << "--Main menu-- \n" << "1) Calculate Area \n" << "2) Calculate Volume\n" << endl;

    
    cin >> main_menu;
    switch(main_menu)
    {
case 1:
    cout << "--Area menu-- \n" << "1) Rectangle \n" << "2) Circle\n" << "3) Right Triangle" << endl;
    cout << "\n\nWhat would you like to find the area of?\t\n";
    cin >> area;



    switch(area)
            {
    case 1:

            cout << "Please enter length of rectangle" << endl;
            cin >> length;
            cout << "Please enter width of rectangle" << endl;
            cin >> width;
            area_rectangle = length * width;
            cout << area_rectangle << endl;

            break;

    case 2:

        cout << "Please enter the radius of the circle" << endl;
        cin >> radius_circle;
        area_circle = (radius_circle * radius_circle) * pi;
        cout << area_circle << endl;
        break;

    case 3:
        cout << "Please enter one leg of the right triangle" << endl;
        cin >> leg_one;
        cout << "Please enter the other leg of the right triangle" << endl;
        cin >> leg_two;
        area_triangle = (leg_one * leg_two) / 2;
        cout << area_triangle << endl;
        break;
        
    default:

        cout << "Invalid option selected" << endl;

        break;

            }
        
    break;


case 2:

    cout << "--Volume menu-- \n" << "1) Cylinder \n" << "2) Sphere\n" << endl;
    cout << "\n\nWhat would you like to find the area of?\t\n";
    cin >> volume;



    switch (volume)

    {

    case 1:

        cout << "Please enter radius" << endl;
        cin >> radius_cyl;
        cout << "Please enter height" << endl;
        cin >> height_cyl;
        volume_cyl = (radius_cyl * radius_cyl) * pi * height_cyl;
        cout << volume_cyl << endl;

        break;

    case 2:
        cout << "Please enter the radius of a sphere" << endl;
        cin >> radius_sphere;
        volume_sph = 1.333 * pi * (radius_sphere * radius_sphere * radius_sphere);
        cout << volume_sph << endl;

        break;
    
    default:
        cout << "Invalid option selected" << endl;
        break;

    }

    break;

    }

   

        return 0;
}

