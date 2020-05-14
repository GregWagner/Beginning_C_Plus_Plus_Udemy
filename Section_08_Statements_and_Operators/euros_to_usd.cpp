#include <iostream>

int main() {
    const double USD_PER_EUR {1.19};

    std::cout << "Welcome  to the EUR to USE converter\n" 
        << "Enter the value in EUR: ";

    double euros {};
    std::cin >> euros;

    double dollars {euros * USD_PER_EUR};

    std::cout << euros << " euros is equivalent to " << dollars << " dollars\n";
}
