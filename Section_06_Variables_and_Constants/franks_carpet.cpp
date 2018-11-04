#include <iostream>

int main()
{
    const int CHARGE_PER_SMALL_ROOM {25};
    const int CHARGE_PER_LARGE_ROOM {35};
    const double TAX_RATE {0.06};
    const int NUMBER_OF_DAYS_VALID {30};

    int number_of_small_rooms {};
    std::cout << "Enter the number of small rooms to clean: ";
    std::cin >> number_of_small_rooms;

    int number_of_large_rooms {};
    std::cout << "Enter the number of large rooms to clean: ";
    std::cin >> number_of_large_rooms;

    std::cout << "\n\nEstimate for carpet cleaning service:\n";
    std::cout << "Number of small rooms: " << number_of_small_rooms << '\n';
    std::cout << "Number of large rooms: " << number_of_large_rooms << '\n';
    std::cout << "Price per small room: $" << CHARGE_PER_SMALL_ROOM << '\n';
    std::cout << "Price per large room: $" << CHARGE_PER_LARGE_ROOM << '\n';
    int cost {(number_of_small_rooms * CHARGE_PER_SMALL_ROOM) +
        (number_of_large_rooms * CHARGE_PER_LARGE_ROOM)};
    double tax {cost * TAX_RATE};
    std::cout << "Cost: $" << cost << '\n';
    std::cout << "Tax: $" << tax << '\n';
    std::cout << "===========================================\n";
    std::cout << "Total estimate: $" << (cost + tax) << '\n';
    std::cout << "This estimate is valid for " << NUMBER_OF_DAYS_VALID 
        << " days\n";
}
