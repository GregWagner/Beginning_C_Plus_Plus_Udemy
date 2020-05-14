// Primitive Types

#include <iostream>

int main()
{
    // Character type
    char middleInitial {'M'};
    std::cout << "My middle initial is " << middleInitial << '\n';

    // Integer types
    unsigned short examScore {55};
    std::cout << "My exam score was " << examScore << '\n';

    int countriesRepresented {65};
    std::cout << "There were " << countriesRepresented
        << " countries represented.\n";

    long peopleInFlorida {20'610'000};
    std::cout << "There are about " << peopleInFlorida
        << " people in Florida\n";

    long peopleOnEarth {7'600'000'000};
    std::cout << "There are about " << peopleOnEarth
        << " people on earth.\n";

    long long distanceToAlphaCentauri {9'461'000'000'000};
    std::cout << "The distance to alpha centauri is " 
        << distanceToAlphaCentauri <<'\n';

    // Floating point types
    float carPayment {401.23};
    std::cout << "My car payment is " << carPayment << '\n';

    double pi {3.14159};
    std::cout <<"Pi is " << pi << '\n';

    long double largeAmount {2.7e120};
    std::cout << largeAmount << " is a very big number\n";

    // Boolean type
    bool gameOver {};
    std::cout << "The value of gameOver is " << gameOver << '\n';

    // Overflow example
    short value1 {30'000};
    short value2 {1'000};
    short product {value1 * value2};
    std::cout << "The product of " << value1 << " and " << value2 << " is "
        << product << '\n';
}
