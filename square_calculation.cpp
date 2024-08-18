#include <iostream>
using namespace std;

int main()
{
    int side = 0;

    cout << "enter the square value :";
    cin >> side;

    int area = side * side;
    int perimeter = 4 * side;

    cout << "Area of square "<< area <<"\n";
    cout << "perimeter of square" << perimeter <<"\n";

    return 0;
}