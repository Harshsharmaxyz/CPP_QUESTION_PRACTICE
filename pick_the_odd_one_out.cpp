/*
pick the odd one out - write program to accept four numbers from user and print the odd one among them.
= Number can be odd among others in following scenario.

- if three number are equal, then the different one is odd one among them.

- if three number are even ,then the diffrent one is odd one among them.

- if three number are odd , then the diffrent one is odd one among them.

= if all are diffrent , even or odd , then print no number is odd one among them.
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;

    cout <<"enter first number"<<"\n";
    cin >> num1;

    cout << "enter second number"<<"\n";
    cin >> num2;

    cout << "enter third number"<<"\n";
    cin >> num3;

    cout << "enter forth number"<<"\n";
    cin >> num4;
    
    if(num1 == num2 && num2 == num3 && num3 != num4)
    {
        cout << "The odd one is :"<< num4 << "\n";
    }
    else if(num1 == num2 && num2 == num4 && num4 != num3)
    {
        cout << "The odd one is :"<< num3 <<"\n";
    }
    else if(num1 == num3 && num3 == num4 && num4 != num2)
    {
        cout << "the odd one is :" << num2 << "\n";
    }
    else if(num2 == num3 && num3 == num4 && num4 != num1)
    {
        cout << "The odd one is :" << num1 <<"\n";
    }
    else if(num1 % 2 == 0 && num2 % 2 == 0 && num3 % 2 == 0 && num4 % 2 != 0)
    {
        cout << "The odd one is :" << num4 << "\n";
    }
    else if(num4 % 2 == 0 && num1 % 2 == 0 && num2 % 2 == 0 && num3 % 2 != 0)
    {
        cout << "The odd one is :" << num3 <<"\n";
    }
    else if(num3 % 2 == 0 && num4 % 2 == 0 && num1 % 2 == 0 && num2 % 2 != 0)
    {
        cout << "The odd one is :" << num2 << "\n";
    }
    else if(num2 % 2 == 0 && num3 % 2 == 0 && num4 % 2 == 0 && num1 % 2 != 0)
    {
        cout << "The odd one is :"<< num1 << "\n";
    }
    else if(num1 % 2 != 0 && num2 % 2 != 0 && num3 % 2 != 0 && num4 % 2 == 0)
    {
        cout << "The odd one is :" << num4 <<"\n";
    }
    else if(num4 % 2 != 0 && num1 % 2 != 0 && num2 % 2 != 0 && num3 % 2 == 0)
    {
        cout << "The odd one is :" << num3 <<"\n";
    }
    else if(num3 % 2 != 0 && num4 % 2 != 0 && num1 % 2 != 0 && num2 % 2 == 0)
    {
        cout << "The odd one is :" << num2 <<"\n";
    }
    else if(num2 % 2 != 0 && num3 % 2 != 0 && num4 % 2 != 0 && num1 % 2 == 0)
    {
        cout << "The odd one is :" << num1 << "\n";
    }
    else{
    cout <<"then print no number is odd one among them."<< "\n";
    }
    return 0;

}