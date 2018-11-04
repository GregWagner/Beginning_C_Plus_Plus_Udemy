#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vector1 {};
    std::vector<int> vector2 {};

    vector1.push_back(10);
    vector1.push_back(20);

    std::cout << "Vector 1 contains:\n"
        << vector1.at(0) << " and " << vector1.at(1) 
        << " and the size is " << vector1.size() << "\n\n";

    vector2.push_back(100);
    vector2.push_back(200);

    std::cout << "Vector 2 contains:\n"
        << vector2.at(0) << " and " << vector2.at(1) 
        << " and the size is " << vector2.size() << "\n\n";

    std::vector<std::vector<int>> vector_2d {};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    std::cout << "Vector 2D contains:\n"
        << vector_2d.at(0).at(0) << " and " << vector_2d.at(0).at(1) << '\n'
        << vector_2d.at(1).at(0) << " and " << vector_2d.at(1).at(1) << "\n\n";

    vector1.at(0) = 1000;

    std::cout << "Vector 2D now contains:\n"
        << vector_2d.at(0).at(0) << " and " << vector_2d.at(0).at(1) << '\n'
        << vector_2d.at(1).at(0) << " and " << vector_2d.at(1).at(1) << "\n\n";

    std::cout << "Vector 1 contains:\n"
        << vector1.at(0) << " and " << vector1.at(1) 
        << " and the size is " << vector1.size() << '\n';
}
