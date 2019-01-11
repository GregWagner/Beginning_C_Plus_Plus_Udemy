// Primitive Types

#include <iostream>

int main()
{
    // Character type
    char middle_initial {'J'};
    std::cout << "My middle initial is " << middle_initial << '\n';

    // Integer types
    unsigned short exam_score {55};
    std::cout << "My exam score was " << exam_score << '\n';

    int countries_represented {65};
    std::cout << "There were " << countries_represented
        << " countries represented.\n";

    long people_in_florida {20'610'000};
    std::cout << "There are about " << people_in_florida
        << " people in Florida\n";

    long people_on_earth {7'600'000'000};
    std::cout << "There are about " << people_on_earth
        << " people on earth.\n";

    long long distance_to_alpha_centauri {9'461'000'000'000};
    std::cout << "The distance to alpha centauri is " 
        << distance_to_alpha_centauri <<'\n';

    // Floating point types
    float car_payment {401.23};
    std::cout << "My car payment is " << car_payment << '\n';

    double pi {3.14159};
    std::cout <<"Pi is " << pi << '\n';

    long double large_amount {2.7e120};
    std::cout << large_amount << " is a very big number\n";

    // Boolean type
    bool game_over {};
    std::cout << "The value of game_over is " << game_over << '\n';

    // Overflow example
    short value1 {30'000};
    short value2 {1'000};
    short product {value1 * value2};
    std::cout << "The product of " << value1 << " and " << value2 << " is "
        << product << '\n';
}
