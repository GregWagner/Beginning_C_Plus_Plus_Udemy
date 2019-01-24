#include <iostream>
#include <iomanip>
#include <string>

int main() {
    std::string s0;
    std::string s1 {"Apple"};
    std::string s2 {"Banana"};
    std::string s3 {"Kiwi"};
    std::string s4 {"apple"};
    std::string s5 {s1};        // Apple
    std::string s6 {s1, 0, 3};  // App
    std::string s7 (10, 'X');   // XXXXXXXXXX

    std::cout << s0 << '\n';        // note no garbage
    std::cout << s0.length() << '\n';

    // Initialization
    std::cout << "\nInitialization\n-------------------------\n"; 
    std::cout << "s1 is initialized to: " << s1 << '\n';
    std::cout << "s2 is initialized to: " << s2 << '\n';
    std::cout << "s3 is initialized to: " << s3 << '\n';
    std::cout << "s4 is initialized to: " << s4 << '\n';
    std::cout << "s5 is initialized to: " << s5 << '\n';
    std::cout << "s6 is initialized to: " << s6 << '\n';
    std::cout << "s7 is initialized to: " << s7 << '\n';

}
