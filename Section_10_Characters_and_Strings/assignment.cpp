#include <iostream>
#include <string>

int main() {
    std::string in {};
    std::cout << "Enter a string: ";
    std::cin >> in;

    size_t spaces = in.length();

    for (size_t i = 1; i <= in.length(); ++i) {
        for (size_t space {0}; space < spaces; ++space) {
            std::cout << ' ';
        }
        --spaces;
        for (size_t j = 0; j < i; ++j) {
            std::cout << in[j];
        }
        for (int j = i - 1; j > 0; --j) {
            std::cout << in[j - 1];
        }
        std::cout << '\n';
    }
}
