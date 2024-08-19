#include <iostream>
using namespace std;

int main()
{
    int length;
    cout << "Enter the length;";
    cin >> length;
    
    int breadth;
    cout <<"Enter the breadth:"<<"\n";
    cin >> breadth;

    int area = length * breadth;
    int perimeter = 2 *(length*breadth);

    cout << "Area of rectangle:"<< area <<"\n";

    cout << "perimeter of ractangle:"<< perimeter <<"\n";

    return 0;
}