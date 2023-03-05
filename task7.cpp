#include "header.h"

void task7()
{
    std::set<std::string> set_of_values;
    std::string operation, expression;

    while (std::cin >> operation >> expression)  // while we can read a line
    {
        if (operation == "+")
        {
            set_of_values.insert(expression);
        }
        else if (operation == "-")
        {
            set_of_values.erase(expression);
        }
        else if (operation == "?")
        {
            if (set_of_values.count(expression) > 0) // counting an occurrence of this operation in our set
            {
                std::cout << "YES" << std::endl;
            }
            else
            {
                std::cout << "NO" << std::endl;
            }
        }
        else if (operation == "#")
        {
            break;
        }
    }
}