// Calculate the area of a room in square feet
#include <iostream>

int main()
{
    int roomWidth {};
    std::cout << "Enter the width of the room: ";
    std::cin >> roomWidth;

    int roomLength {};
    std::cout << "Enter the length of the room: ";
    std::cin >> roomLength;

    std::cout << "The area of the room is " << (roomLength * roomWidth) 
        << " square feet\n";
}
