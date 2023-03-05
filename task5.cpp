#include "header.h"

void task5() {

    std::vector<int> vector_of_values;
    std::string input_string;
    int counter = -1;

    std::getline(std::cin, input_string);

    for (auto i = input_string.begin(); i < input_string.end(); i++) {
        if (*i == ' ') continue;

        if (std::isdigit(*i))
        {
            vector_of_values.push_back(*i - '0');
            counter++;
        }

        if (*i == '+')
        {
            int a = vector_of_values[counter - 1] + vector_of_values[counter];
            vector_of_values.pop_back();
            vector_of_values.pop_back();
            vector_of_values.push_back(a);
            counter--;
        }

        if (*i == '-')
        {
            int a = vector_of_values[counter - 1] - vector_of_values[counter];
            vector_of_values.pop_back();
            vector_of_values.pop_back();
            vector_of_values.push_back(a);
            counter--;
        }

        if (*i == '*')
        {
            int a = vector_of_values[counter - 1] * vector_of_values[counter];
            vector_of_values.pop_back();
            vector_of_values.pop_back();
            vector_of_values.push_back(a);
            counter--;
        }
    }
    std::cout << vector_of_values[0] << std::endl;
}