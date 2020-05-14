#include <iostream>

int main()
{
    const double CHARGE_PER_SMALL_ROOM {25};
    const double CHARGE_PER_LARGE_ROOM {35};
    const double TAX_RATE {0.06};
    const int NUMBER_OF_DAYS_VALID {30};

    // prompt user to enter the number of rooms
    int numberOfSmallRooms {};
    std::cout << "Enter the number of small rooms to clean: ";
    std::cin >> numberOfSmallRooms;

    int numberOfLargeRooms {};
    std::cout << "Enter the number of large rooms to clean: ";
    std::cin >> numberOfLargeRooms;

    double cost {(numberOfSmallRooms * CHARGE_PER_SMALL_ROOM) +
        (numberOfLargeRooms * CHARGE_PER_LARGE_ROOM)};
    double tax {cost * TAX_RATE};

    // display estimate
    std::cout << "\n\nEstimate for carpet cleaning service:\n"
        << "\nNumber of small rooms: " << numberOfSmallRooms
        << "\nNumber of large rooms: " << numberOfLargeRooms
        << "\nPrice per small room: $" << CHARGE_PER_SMALL_ROOM
        << "\nPrice per large room: $" << CHARGE_PER_LARGE_ROOM
        << "\nCost: $" << cost
        << "\nTax: $" << tax
        << "\n==========================================="
        << "\nTotal estimate: $" << (cost + tax)
        << "\nThis estimate is valid for " << NUMBER_OF_DAYS_VALID << " days\n";
}
