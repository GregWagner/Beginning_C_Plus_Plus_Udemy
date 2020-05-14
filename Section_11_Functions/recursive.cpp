#include <iostream>
#include <iomanip>

int function_activation_count {};

double a_penny_doubled_everyday(int days, double amount = 0.01);

void amount_accumulated() {
    double total_amount {a_penny_doubled_everyday(25)};

    std::cout <<  "If I start with a penny and doubled it every day for 25 "
        << "days, I will have $" << std::setprecision(10) << total_amount;
}

double a_penny_doubled_everyday(int days, double amount) {
    function_activation_count++;
    if (days == 1) {
        return amount;
    }
    return a_penny_doubled_everyday(days - 1, 2.0 * amount);

}

int test_function_activation_count() {
    return function_activation_count;
}

int main() {
    amount_accumulated();
//    std::cout << test_function_activation_count() << '\n';
}
