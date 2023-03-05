#include "header.h"

void task3()
{
    std::deque<int> first_player, second_player;
    int count_of_moves = 0; // counting the number of moves

    for (int i = 0; i < 5; i++)
    {
        int card;
        std::cin >> card;
        first_player.push_back(card);
    }

    for (int i = 0; i < 5; i++)
    {
        int card;
        std::cin >> card;
        second_player.push_back(card);
    }

    while (!first_player.empty() && !second_player.empty() && count_of_moves < 1000000) {
        int card1 = first_player.front();
        first_player.pop_front();

        int card2 = second_player.front();
        second_player.pop_front();

        if (card1 == 0 && card2 == 9)
        {
            first_player.push_back(card1);
            first_player.push_back(card2);
        }
        else if (card1 == 9 && card2 == 0)
        {
            second_player.push_back(card1);
            second_player.push_back(card2);
        }
        else if (card1 > card2)
        {
            first_player.push_back(card1);
            first_player.push_back(card2);
        }
        else
        {
            second_player.push_back(card1);
            second_player.push_back(card2);
        }
        count_of_moves++;
    }

    if (count_of_moves == 1000000) // if the count of count_of_moves exceeds this point
    {
        std::cout << "botva" << std::endl;
    }
    else if (second_player.empty())
    {
        std::cout << "first " << count_of_moves << std::endl;
    }
    else
    {
        std::cout << "second " << count_of_moves << std::endl;
    }

}
