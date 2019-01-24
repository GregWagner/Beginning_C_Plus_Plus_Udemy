#include <iostream>
#include <string>
using namespace std;

void cpp_strings() {

    string unformatted_full_name {"StephenHawking"};

    std::string first_name {unformatted_full_name, 0, 7};
    std::string last_name = unformatted_full_name.substr(7,
            unformatted_full_name.length());

    std::string formatted_full_name = first_name + last_name;
    formatted_full_name.insert(7, " ");
    std::cout << formatted_full_name;
    std::cout << std::endl;
}

int main() {
    cpp_strings();
}
