//Write a program that acept two numbers from the user and print equal if the number are equal ?
#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;

    cout << "Enter the first number :" << "\n";
    cin >> num1 ;

    cout << "Enter the second number :" << "\n";
    cin >> num2 ;

    if(num1 == num2)
    {
        cout << "equal" << "\n";
    }
    return 0;
    
}