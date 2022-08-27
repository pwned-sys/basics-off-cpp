#include <iostream>
#include <cmath>

int main()
{
  double num1, num2;
  std::cout << "Enter First Number: " 
  std::cin >> num1; // getting users input for the first number
  
  std::cout << "Enter The Second Number: "
  std::cin >> num2;  // getting users input for the second number
  
  std::cout << "Your Numbers Added Are Equal To: " << num1 + num2;  // adding both of numbers and displaying them

  return 0;
}
