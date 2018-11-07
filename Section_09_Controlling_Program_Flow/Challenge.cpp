#include <iostream>
#include <iomanip>
#include <cctype>
#include <vector>

void printMedian(const std::vector<int> &v) 
{
    if (v.size() == 0) {
        std::cout << "List is empty\n";
    } else {
        int sum {};
        for (auto item: v) {
            sum += item;
        }
        std::cout << "Median is: "
            << (static_cast<double>(sum) / v.size()) << '\n';
    }
}

void printSmallest(const std::vector<int> &v)
{
    if (v.size() == 0) {
        std::cout << "List is empty\n";
    } else {
        int smallest {v[0]};
        for (auto item : v) {
            smallest = (item < smallest ? item : smallest);
        }
        std::cout << "Smallest value: " << smallest << '\n';
    }
}

void printLargest(const std::vector<int> &v)
{
    if (v.size() == 0) {
        std::cout << "List is empty\n";
    } else {
        int largest {v[0]};
        for (auto item : v) {
            largest = (item > largest ? item : largest);
        }
        std::cout << "Largest value: " << largest << '\n';
    }
}

void addValue(std::vector<int> &v) 
{
    int temp {};
    std::cout << "Enter enter to add: ";
    std::cin >> temp;

    v.push_back(temp);
}

void printVector(const std::vector<int> &v) 
{
    std::cout << "[ ";
    for (auto item : v) {
        std::cout << item << ' ';
    }
    std::cout << "]\n";
}

int main()
{
    char choice {};
    std::vector<int> v {};

    do {
        std::cout << "\nP - Print numbers\n"
            << "A - Add a number\n"
            << "M - Display mean of the numbers\n"
            << "S - Display the smallest number\n"
            << "L - Display Largest number\n"
            << "Q - Quit\n\n"
            << "Enter your choice: ";
        std::cin >> choice;

        switch (std::toupper(choice)) {
            case 'P':
                printVector(v);
                break;
            case 'A':
                addValue(v);
                break;
            case 'M':
                printMedian(v);
                break;
            case 'S':
                printSmallest(v);
                break;
            case 'L':
                printLargest(v);
                break;
            case 'Q':
                break;
            default:
                std::cout << "Unknown selection, please try again\n";
                break;
        }
    } while (std::toupper(choice) != 'Q');
}
