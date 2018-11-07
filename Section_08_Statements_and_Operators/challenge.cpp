#include <iostream>

int main()
{
    const int dollar_value {100};
    const int quarter_value {25};
    const int dime_value {10};
    const int nickel_value {5};

    int cents {};
    std::cout << "Enter an amount in cents: ";
    std::cin >> cents;

    std::cout << "You can provide change for this as follows:\n";
    std::cout << "dollars   : " << cents / dollar_value << '\n';
    cents %= dollar_value;
    std::cout << "quarters  : " << cents / quarter_value << '\n';
    cents %= quarter_value;
    std::cout << "dimes     : " << cents / dime_value << '\n';
    cents %= dime_value;
    std::cout << "nickels   : " << cents / nickel_value << '\n';
    cents %= nickel_value;
    std::cout << "pennies   : " << cents << '\n';
}
