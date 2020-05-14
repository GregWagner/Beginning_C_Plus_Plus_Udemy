#include <iostream>
#include <cstring>
#include <cctype>

int main() {
    char temp[50];

    // unititalized so will display garbage
//i char first_name[20];
//  std::cout << first_name << '\n';

    char first_name[20];
    std::cout << "Please enter your first name: ";
    std::cin >> first_name;

    char last_name[20];
    std::cout << "Please enter your last name: ";
    std::cin >> last_name;

    std::cout << "---------------------------\n";

    std::cout << "Hello, " << first_name << " your first name has "
        << std::strlen(first_name) << " characters.\n";
    std::cout << "and your last name, " << last_name << " has "
        << std::strlen(last_name) << " characters.\n";

    char full_name[50];
    std::strcpy(full_name, first_name);
    std::strcat(full_name, " ");
    std::strcat(full_name, last_name);
    std::cout << "Your full name is " << full_name << " has "
        << std::strlen(full_name) << " characters.\n";
/*
    std::cout << "---------------------------\n";
    std::cout << "Enter your full name: ";
    std::cin >> full_name;
    std::cout << "Your full name is " << full_name << " has "
        << std::strlen(full_name) << " characters.\n";
 */

    std::cin.getline(temp, 50);
    std::cout << "---------------------------\n";
    std::cout << "Enter your full name: ";
    std::cin.getline(full_name, 50);
    std::cout << "Your full name is " << full_name << " has "
        << std::strlen(full_name) << " characters.\n";

    std::cout << "---------------------------\n";
    strcpy(temp, full_name);
    if (strcmp(temp, full_name) == 0) {
        std::cout << temp << " and " << full_name << " are the same.\n";
    } else {
        std::cout << temp << " and " << full_name << " are different.\n";
    }

    std::cout << "---------------------------\n";
    for (size_t i {0}; i < std::strlen(full_name); ++i) {
        if (std::isalpha(full_name[i])) {
            full_name[i] = std::toupper(full_name[i]);
        }
    }
    std::cout << "Your full name is " << full_name << "\n";

    std::cout << "---------------------------\n";
    if (strcmp(temp, full_name) == 0) {
        std::cout << temp << " and " << full_name << " are the same.\n";
    } else {
        std::cout << temp << " and " << full_name << " are different.\n";
    }

    std::cout << "---------------------------\n";
    std::cout << "Result of comparing " << temp << " and " << full_name
        << ": " << strcmp(temp, full_name) << '\n';
    std::cout << "Result of comparing " << full_name << " and " << temp
        << ": " << strcmp(full_name, temp) << '\n';
}
