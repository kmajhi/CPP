#include <iostream>

int main() {
  int num1, num2;

  std::cout << "Enter first number: ";
  std::cin >> num1;

  std::cout << "Enter second number: ";
  std::cin >> num2;

  if (num1 > num2) {
    std::cout << "Maximum number is: " << num1;
  } else {
    std::cout << "Maximum number is: " << num2;
  }

  return 0;
}
