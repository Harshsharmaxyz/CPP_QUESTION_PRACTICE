//write a program that accept an integer from user and print positive,if the integer is positive?
#include <iostream>
using namespace std;
int main()
{
    int num = 0;
     cout << "Enter a interger number";
     cin >> num ;

     if( num < 0)
     {
        cout << " positive " << "\n";
     }
     return 0;
}