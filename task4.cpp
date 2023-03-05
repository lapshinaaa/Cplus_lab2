#include "header.h"

bool openingBracket(char left)
{
    //   checking if the given character is in fact an opening bracket
    return ('(' == left || '{' == left || '[' == left);
}


bool closingBracket(char left, char right)
{
    // a function return a bool value after checking if the closing bracket is correct

    return (('(' == left && ')' == right) || ('[' == left && ']' == right) || ('{' == left && '}' == right));
}


void task4()
{
    std::string input;
    getline(std::cin >> std::ws, input); // getting the input as a line

    std::stack<char> stack_of_brackets; // creating a stack to store all the brackets

    std::string::const_iterator it; //  an iterator for a string of characters

    char bracket;

    for (it = input.begin(); it != input.end(); ++it)
    {
        bracket = *it;

        if (openingBracket(bracket))
        {
            stack_of_brackets.push(bracket); // pushing to the stack if it's an opening bracket
        }

        else if (closingBracket(stack_of_brackets.top(), bracket))
        {
            stack_of_brackets.pop();
        }

        else
        {
            stack_of_brackets.push(bracket);
            break;
        }

    }

    if (stack_of_brackets.empty())
    {
        std::cout<<"yes";
    }

    else
    {
        std::cout<<"no";
    }

}