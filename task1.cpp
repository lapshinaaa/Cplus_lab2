#include "header.h"

void task1()
{
    int number_of_elements;
    std::cin >> number_of_elements;

    std::string input;
    getline(std::cin >> std::ws, input); // getting the input as a line with spaces

    std::vector<int> vector_of_digits;
    std::stringstream ss(input);
    int digit;
    while (ss >> digit) {   // reading the digits and pushing them into the vector
        vector_of_digits.push_back(digit);
    }

    sort(vector_of_digits.begin(), vector_of_digits.end()); //  sorting the values in vector
    auto it = unique(vector_of_digits.begin(), vector_of_digits.end());
    vector_of_digits.erase(it, vector_of_digits.end()); // erasing the unnecessary elements

    std::cout << vector_of_digits.size() << std::endl;

}