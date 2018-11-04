// Arrays

#include <iostream>

int main()
{
    char vowels[] {'a', 'e', 'i', 'o', 'u'};
    std::cout << "\nThe first vowel is " << vowels[0] << '\n'
        << "The last vowel is " << vowels[4] << '\n';

    double hi_temps[] {90.1, 89.8, 77.5, 81.6};
    std::cout << "\nThe first high temperature is " << hi_temps[0] << '\n';
    hi_temps[0] = 100.7;
    std::cout << "The first high temperature is now: " << hi_temps[0] << '\n';

    int test_scores [] {100, 90, 80, 70, 60};
    std::cout << "\nFirst score at index 0: " << test_scores[0] << '\n';
    std::cout << "Second score at index 1: " << test_scores[1] << '\n';
    std::cout << "Third score at index 2: " << test_scores[2] << '\n';
    std::cout << "Fourth score at index 3: " << test_scores[3] << '\n';
    std::cout << "Fifth score at index 4: " << test_scores[4] << '\n';

    std::cout << "\nEnter 5 test scores: ";
    std::cin >> test_scores[0];
    std::cin >> test_scores[1];
    std::cin >> test_scores[2];
    std::cin >> test_scores[3];
    std::cin >> test_scores[4];

    std::cout << "\nThe updated array is:\n";
    std::cout << "First score at index 0: " << test_scores[0] << '\n';
    std::cout << "Second score at index 1: " << test_scores[1] << '\n';
    std::cout << "Third score at index 2: " << test_scores[2] << '\n';
    std::cout << "Fourth score at index 3: " << test_scores[3] << '\n';
    std::cout << "Fifth score at index 4: " << test_scores[4] << '\n';

    std::cout << "\nNotice what the value of the array name is: "
        << test_scores << "\n\n";

    // Exercise
    int arr[10] {};
}
