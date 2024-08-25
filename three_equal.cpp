//write program to accept three number from user and print equal if the numbers are equal?
#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    cout << "Enter a first number:";
    cin >> num1 ;
    cout << "\n";

    cout << "Enter a sceond number:";
    cin >> num2;
    cout << "\n";

    cout << "Enter a third number:";
    cin >> num3;
    cout << "\n";

    if(num1 == num2 && num1 == num3)
    {
        cout << "equals"<<"\n";
    }
    return 0;
}