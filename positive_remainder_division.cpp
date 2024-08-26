/*write a program to accept two number fro user, if the both the numbers are positive , 
get the remainder of the division by
5 for both the number if remainder of the number . if remainder of both the division
are equal print number are equal otherwise
number are not equal .if one or both the number are negative , print calculation not possible?*/
#include <iostream>
using namespace std;

int main()
{
    int num1 = 0;
    cout << "enter the first number:" << "\n";
    cin >> num1;

    int num2 = 0;
    cout << "enter the second number:"<< "\n";
    cin >> num2;

    if(num1 >= 0 && num2 >= 0)
    {
        int remainder1 = num1 % 5;
        int remainder2 = num2 % 5;

        if(remainder1 == remainder2)
        {
            cout << "number are equal"<< "\n";
        }
        else{
            cout <<"number are not equal" << "\n";
        }
    }
    else{
        cout << "calculation not possible" << "\n";

    }
    return 0 ;

}
