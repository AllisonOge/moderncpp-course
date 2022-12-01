// writing a small guessig game

#include <iostream>
#include <stdlib.h>
#include <ctime>

int main()
{
    // randomly generate a number between 0 and 99
    std::srand(std::time(nullptr));
    const int rand_number = std::rand() / ((RAND_MAX + 1u) / 99);

    std::cout << "A number between 0 and 99 was generated." << std::endl;
    std::cout << "Can your guess the number (you have 3 tries): ";
    int number;
    int i = 0;
    while (i < 3)
    {

        std::cin >> number;
        if (number > rand_number)
        {
            std::cout << "Number is lesser than " << number << std::endl;
        }
        else if (number < rand_number)
        {
            std::cout << "Number is greater than " << number << std::endl;
        }
        else
        {
            std::cout << "You won! You guessed it right. " << number << " is correct." << std::endl;
            return 0;
        }
        ++i;
    }
    std::cout << "Better luck next time. Game over!" << std::endl;
    return 0;
}