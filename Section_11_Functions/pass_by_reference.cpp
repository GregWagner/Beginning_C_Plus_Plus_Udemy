#include <iostream>
#include <string>
#include <typeinfo>

std::string print_guest_list(const std::string &guest_1, const std::string &guest_2, const std::string &guest_3);
void clear_guest_list(std::string &guest_1, std::string &guest_2, std::string &guest_3);

void event_guest_list() {
    std::string guest_1 {"Larry"};
    std::string guest_2 {"Moe"};
    std::string guest_3 {"Curly"};

    print_guest_list(guest_1, guest_2, guest_3);
    clear_guest_list(guest_1, guest_2, guest_3);
    print_guest_list(guest_1, guest_2, guest_3);
}

std::string print_guest_list(const std::string &guest_1,
        const std::string &guest_2, const std::string &guest_3) {

    std::cout << guest_1 << '\n';
    std::cout << guest_2 << '\n';
    std::cout << guest_3 << '\n';

    std::string test_1 = typeid(guest_1).name();
    std::string test_2 = typeid(guest_2).name();
    std::string test_3 = typeid(guest_3).name();
    return test_1 + test_2 + test_3;
}

void clear_guest_list(std::string &guest_1, std::string &guest_2, std::string &guest_3) {
    guest_1 = guest_2 = guest_3 = " ";
}

int main() {
    event_guest_list();
}
