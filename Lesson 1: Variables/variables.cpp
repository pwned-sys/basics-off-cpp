#include <iostream>

using namespace std;

int main()
{
    string personsname = "John"; // we first define a string. in this case "personname". if we change the name "John" to something else the printed text from below will change too
    int age; // here we create an integer
    age = 5; // we now set the integer value in this case "age" to 5. the same happens as for changing the name. the printed text from below changes.
    std::cout << "Hello My Name is " << personsname << " I am " << age << " Years Old" << endl;

    return 0;
}
