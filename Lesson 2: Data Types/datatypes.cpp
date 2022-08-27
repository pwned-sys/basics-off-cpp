#include <iostream>

int main()
{
    char grade = 'A'; // used to declare character type variables
    string academy = "Brayden's Academy";
    int age = "25"; // used to display full numbers without decimals
    double gpa = "3.3"; // used to display numbers with decimals, you could use "float gpa = "3.3";" here too
    bool isGay = false; // bool can only take two values: 0 = false and 1 = true

    std::cout << grade << endl; // you could just do "std::cout << "A" << endl;" but its easier to store your datas in variables
    return 0;
}
