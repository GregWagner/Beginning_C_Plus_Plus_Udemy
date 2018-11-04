// The sizeof operator
#include <iostream>
#include <climits>

int main()
{
    std::cout << "sizeof information\n";
    std::cout << "=========================\n";
    std::cout << "char: " << sizeof (char) << " bytes.\n";
    std::cout << "int: " << sizeof (int) << " bytes.\n";
    std::cout << "unsigned: " << sizeof (unsigned) << " bytes.\n";
    std::cout << "short: " << sizeof (short) << " bytes.\n";
    std::cout << "long: " << sizeof (long) << " bytes.\n";
    std::cout << "long long: " << sizeof (long long) << " bytes.\n";
    std::cout << "=========================\n";
    std::cout << "float: " << sizeof (float) << " bytes.\n";
    std::cout << "double: " << sizeof (double) << " bytes.\n";
    std::cout << "long double: " << sizeof (long double) << " bytes.\n";
    std::cout << "=========================\n";
    std::cout << "Minimum values:\n";
    std::cout << "char: " << CHAR_MIN << '\n';
    std::cout << "int: " << INT_MIN << '\n';
    std::cout << "short: " << SHRT_MIN << '\n';
    std::cout << "long: " << LONG_MIN << '\n';
    std::cout << "long long: " << LLONG_MIN << '\n';
    std::cout << "=========================\n";
    std::cout << "Maximum values:\n";
    std::cout << "char: " << CHAR_MAX << '\n';
    std::cout << "int: " << INT_MAX << '\n';
    std::cout << "short: " << SHRT_MAX << '\n';
    std::cout << "long: " << LONG_MAX << '\n';
    std::cout << "long long: " << LLONG_MAX << '\n';
    std::cout << "=========================\n";

    // sizeof can also be used with variable names
    std::cout << "sizeof using variable names\n";
    int age {21};
    std::cout << "age is " << sizeof age << " bytes.\n";

    double wage {22.24};
    std::cout << "wage is " << sizeof wage << " bytes.\n";

}
