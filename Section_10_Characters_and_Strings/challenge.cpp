#include <iostream>
#include <string>
#include <cctype>

int main() {
    std::string alp {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string key {"XANLWEBGJHQDYVTKFUOMPCIASRxanlwebgjhqdyvtkfuompciasr"};

    std::string input; {}
    std::cout << "Enter the string in encrypt: ";
    std::getline(std::cin, input);

    std::string output {};
    for (char c: input) {
        if (isalpha(c)) {
            size_t index = alp.find(c);
            output += key[index];
        } else {
            output += c;
        }
    }
    std::cout << "The encrypted word is " << output << '\n';

    std::string decrpyted;
    for (char c : output) {
        if (isalpha(c)) {
            size_t index = key.find(c);
            decrpyted += alp[index];
        } else {
            decrpyted += c;
        }
    }
    std::cout << "The decrpyted word is " << decrpyted << '\n';
}
