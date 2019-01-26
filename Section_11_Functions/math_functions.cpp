#include <iostream>
#include <cmath>

int main() {
    double num {};
    std::cout << "Enter a number (double): ";
    std::cin >> num;

    std::cout << "The square root of " << num << " is: " << std::sqrt(num) << '\n';
    std::cout << "The cubed root of " << num << " is: " << std::cbrt(num) << '\n';

    std::cout << "The sine of " << num << " is: " << std::sin(num) << '\n';
    std::cout << "The cosine of " << num << " is: " << std::cos(num) << '\n';

    std::cout << "The ceil of " << num << " is: " << std::ceil(num) << '\n';
    std::cout << "The floor of " << num << " is: " << std::floor(num) << '\n';
    std::cout << "The round of " << num << " is: " << std::round(num) << '\n';

    double power {};
    std::cout << "\nEnyer a power to raise " << num << " to: ";
    std::cin >> power;

    std::cout << num << " raised to the " << power << " power is: " << std::pow(num, power) << '\n';

}
