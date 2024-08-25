//write a program to accept an integer from user and print even if the number is even ,otherwise print odd?
#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    cout << "Enter a number"<< "\n";
    cin >> num;

    if(num % 2 == 0)
    {
        cout << "even" << "\n"; 
    }
    else{
        cout << "odd" << "\n";
    }
    return 0;
}