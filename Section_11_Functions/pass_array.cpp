#include <iostream>
#include <string>
#include <typeinfo>

std::string print_guest_list(const std::string list[], size_t size);
void clear_guest_list(std::string list[], size_t size);

std::string print_guest_list(const std::string list[], size_t size) {
    for (size_t i {0}; i < size; ++i) {
        std::cout << list[i] << '\n';
    }
    return typeid(list).name();
}

void clear_guest_list(std::string list[], size_t size) {
    for (size_t i {0}; i < size; ++i) {
        list[i] = " ";
    }
}

void event_guest_list() {
    std::string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};

    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);
}


int main() {
    event_guest_list();
}
