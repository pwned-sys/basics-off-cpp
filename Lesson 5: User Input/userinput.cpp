#include <iostream>
#include <cmath>

int main()
{
  int age;
  std::cout << "Input Your Age: ";
  std::cin >> age; // this stores the users age
  
  std::cout << "You Are: " << age << "Years Old"; // prints users age
  
  string name;
  std::cout << "Input Your Name: ";
  getline(cin, name);
  
  std::cout << "You're Name Is: " << name; // prints users name
  
  return 0;
}
