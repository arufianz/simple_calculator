#include <iostream>
#include <ctime>

int main()
{
    int guess, number, tries;

    std::cout << "**************** GUESS THE NUMBER **************** \n";
    
    srand(time(NULL));
    number = (rand() % 100) + 1;
    do{   
        std::cout << "Enter the number: ";
        std::cin >> guess;

        tries++;
        if(guess > number){
            std::cout << "Lower! \n";
        } else if(guess < number){
            std::cout << "Higher! \n";   
        } else{
            std::cout << "Correct! The number is " << number << "\nNumber of tries: " << tries << '\n';
        }

    } while (guess != number);
}