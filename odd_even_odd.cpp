//write a program to accept an integer from user .It the number is even make it odd and print .if the number is odd make it even and print?
#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    cout << "enter a number:"<< "\n";
    cin >> number;

    if (number % 2 == 0)
    {
        number += 1;
        cout << "even is odd:"<< number << "\n";
    }
    else{
        number -= 1;
        cout << "odd id even:"<< number << "\n";
    }
    return 0;

}