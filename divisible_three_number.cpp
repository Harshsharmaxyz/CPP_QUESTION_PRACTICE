//write a program to accept three number from user and print all are divisible by 9 if all three numbers are divisible by 9?
#include <iostream>
using namespace std;
int main()
{
    int num1 =0;
    cout << "Enter a first number:"<< "\n";
    cin >> num1;

    int num2 = 0;
    cout << "Enter a second number:"<< "\n";
    cin >> num2;

    int num3 = 0;
    cout << "Enter a third number:" << "\n";
    cin >> num3;

    if( num1 % 9 == 0 && num2 % 9 == 0 && num3 % 9 == 0)
    {
        cout << "all are divisble" << "\n";
    }
    return 0;
}