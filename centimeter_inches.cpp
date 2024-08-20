#include <iostream>
using namespace std;

int main()
{
    float inches;

    cout << "Enter the length in inches:";
    cin >> inches ;

    float centimeter = inches * 2.54;

    cout << inches << "inches = "<< centimeter << "centimeter" << "\n";

    return 0;
}