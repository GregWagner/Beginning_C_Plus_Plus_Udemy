#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int random_number {};
    constexpr size_t COUNT {10};
    constexpr int MIN {1};
    constexpr int MAX {6};

    std::cout << "RAND_MAX on my system is: " << RAND_MAX << '\n';
    srand(time(nullptr));

    for (size_t i {1}; i <= COUNT; ++i) {
        random_number = std::rand() % (MAX - MIN + 1) + MIN;
        std::cout << random_number << '\n';
    }
}
