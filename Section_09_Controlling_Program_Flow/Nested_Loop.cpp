#include <vector>
#include <iostream>

using namespace std;

int calculate_pairs(vector<int> vec) {
    int result {};
    for (size_t i {}; i < vec.size() - 1; ++i) {
        for (size_t j {i + 1}; j < vec.size(); ++j) {
            result += vec[i] * vec[j];
        }
    }
    return result;
}

int main() {
    std::vector<int> v {1, 2 , 3};
    std::cout << calculate_pairs(v) << '\n';
}
