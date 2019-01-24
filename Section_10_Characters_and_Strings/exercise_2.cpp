#include <iostream>
#include <string>

void cpp_strings() {

    std::string journal_entry_1 {"Isaac Newton"};
    std::string journal_entry_2 {"Leibniz"};

    journal_entry_1.erase(0, 6);

    if (journal_entry_1 > journal_entry_2) {
        std::string temp = journal_entry_1;
        journal_entry_1 = journal_entry_2;
        journal_entry_2 = temp;
    }

    std::cout << journal_entry_1 << "\n" << journal_entry_2;
}

int main() {
    cpp_strings();
}
