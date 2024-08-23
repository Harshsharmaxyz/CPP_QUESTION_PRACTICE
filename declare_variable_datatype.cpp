//Write a program to declare variable of all the different datatypes like int, float, double, char and bool.

#include <iostream>

int main() {
    // Declaration and initialization of different data types
    int integerVar = 10;          // Integer type
    float floatVar = 3.14f;       // Float type
    double doubleVar = 3.14159;   // Double type
    char charVar = 'A';           // Character type
    bool boolVar = true;         // Boolean type

    // Output the values of the variables
    std::cout << "Integer variable: " << integerVar << std::endl;
    std::cout << "Float variable: " << floatVar << std::endl;
    std::cout << "Double variable: " << doubleVar << std::endl;
    std::cout << "Char variable: " << charVar << std::endl;
    std::cout << "Boolean variable: " << std::boolalpha << boolVar << std::endl;

    return 0;
}
