#include <iostream>
using namespace std;

int main()
{
    float radius = 0;
    float length = 0;
    float pi = 3.14159;

    cout << "Enter the radius of a cylinder:";
    cin >> radius ;

    cout << "Enter the length of a Cylinder:";
    cin >> length;

    float area = radius * radius * pi;
    float volume = area * length;

    cout << "The area is " << area << "\n";

    cout << "The volume is " << volume << "\n";

    return 0;
}