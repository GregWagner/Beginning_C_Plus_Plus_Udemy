#include <iostream>
#include <vector>

int main()
{
//  std::vector<char> vowels;       // empty
//  std::vector<char> vowels (5);   // 5 initialized to zero
    std::vector<char> vowels {'a', 'e', 'i', 'o', 'u'};

    std::cout << vowels[0] << '\n';
    std::cout << vowels[4] << '\n';

//  std::vector<int> test_scores (3);       // 3 elements initialized to zero
//  std::vector<int> test_scores (3, 100);  // 2 elements initialized to 199
    std::vector<int> test_scores {100, 98, 89};
    
    std::cout << "\nTest scores using array syntax:\n";
    std::cout << test_scores[0] << '\n';
    std::cout << test_scores[1] << '\n';
    std::cout << test_scores[2] << '\n';

    std::cout << "\nTest scores using vector syntax:\n";
    std::cout << test_scores.at(0) << '\n';
    std::cout << test_scores.at(1) << '\n';
    std::cout << test_scores.at(2) << '\n';
    std::cout << "\nThere are " << test_scores.size() 
        << " scores in the vector\n";

    std::cout << "\nEnter 3 test scores: ";
    std::cin >> test_scores.at(0);
    std::cin >> test_scores.at(1);
    std::cin >> test_scores.at(2);

    std::cout << "\nUpdated test scores:\n";
    std::cout << test_scores.at(0) << '\n';
    std::cout << test_scores.at(1) << '\n';
    std::cout << test_scores.at(2) << '\n';

    std::cout << "\nEnter a test score to add to the vector: ";
    int score_to_add {0};
    std::cin >> score_to_add;
    test_scores.push_back(score_to_add);

    std::cout << "Enter one more test score to add to the vector: ";
    std::cin >> score_to_add;
    test_scores.push_back(score_to_add);

    std::cout << "\nTest scores are now: \n";
    std::cout << test_scores.at(0) << '\n';
    std::cout << test_scores.at(1) << '\n';
    std::cout << test_scores.at(2) << '\n';
    std::cout << test_scores.at(3) << '\n';
    std::cout << test_scores.at(4) << '\n';
    std::cout << "\nThere are now " << test_scores.size() 
        << " scores in the vector\n";

//  std::cout << "This should cause an exception!!" << test_scores.at(10);

    // Example of a 2D-vector
    std::vector <std::vector<int>> movie_ratings {
        {1, 2, 3, 4},
        {1, 2, 4, 4},
        {1, 3, 4, 5}};

    std::cout << "\nHere are the movie raing for reviewer #1 using array syntax\n";
    std::cout << movie_ratings[0][0] << '\n';
    std::cout << movie_ratings[0][1] << '\n';
    std::cout << movie_ratings[0][2] << '\n';
    std::cout << movie_ratings[0][3] << '\n';

    std::cout << "\nHere are the movie raing for reviewer #1 using vector syntax\n";
    std::cout << movie_ratings.at(0).at(0) << '\n';
    std::cout << movie_ratings.at(0).at(1) << '\n';
    std::cout << movie_ratings.at(0).at(2) << '\n';
    std::cout << movie_ratings.at(0).at(3) << '\n';
}
