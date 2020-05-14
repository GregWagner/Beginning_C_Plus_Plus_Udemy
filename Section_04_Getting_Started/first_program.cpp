#include <iostream>

int main() {
    int favoriteNumber {};
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favoriteNumber;

    std::cout << "Amazing!! That is my favorite number too!\n";
    std::cout << "No really!!, " << favoriteNumber 
        << " is my favorite number!\n";
}
