#include <iostream>
#include <cmath>
using namespace std;

void c_math_functions() {

    double bill_total {102.78};
    int number_of_guests {5};

    //----WRITE YOUR CODE BELOW THIS LINE----
    double individual_bill {bill_total / number_of_guests};
    double individual_bill_1 {std::floor(individual_bill)};
    double individual_bill_2 {std::round(individual_bill)};
    double individual_bill_3 {std::ceil(individual_bill * 100) / 100};


    //----WRITE YOUR CODE ABOVE THIS LINE----
    std::cout << "The individual bill at location 1 will be $" << individual_bill_1 << "\n" 
        << "The individual bill at location 2 will be $" << individual_bill_2 << "\n"
        << "The individual bill at location 3 will be $" << individual_bill_3;
}

int main() {
    c_math_functions();
}
