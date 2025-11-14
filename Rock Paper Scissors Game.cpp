//Program :Rock Paper Scissors Game
//Author: Abdelrahman Hassan
//Date : November 2025
//Description : A simple Rock-Paper-Scissors game written in C++ for practice.
//The player competes against the computer, and the game shows scores after each round.
//Features random computer choices, score tracking, and round progression.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    char playAgain = 'y';
    int userScore =0, computerScore = 0, round =1;
    
    while (playAgain == 'y' || playAgain == 'Y'){
    int userChoice , computerChoice ;
    cout << "\n======================Round "<<round << "======================\n";
    cout << "1. Rock🪨\n";
    cout << "2. Paper📜\n";
    cout << "3. Scissors✂\n";
    cout << "Choose (1-3): ";
    cin  >>userChoice;
    
    computerChoice = rand()%3+1;
    cout <<"Computer chose:";
    switch (computerChoice) {
        case 1:cout << "Rock🪨\n";break;
        case 2: cout << "Paper 📜\n"; break;
        case 3: cout << "Scissors ✂\n"; break;
    }

    if (userChoice == computerChoice)
    cout << "It's a draw! 🤝\n";
    
    else if ( (userChoice == 1 && computerChoice == 3) ||
            (userChoice == 2 && computerChoice == 1) ||
            (userChoice == 3 && computerChoice == 2))
            
    {
    cout << "You win this round! 🎉 \n";
    userScore++;}
    
    else if (userChoice >=1 && userChoice <=3){
    cout << "Computer wins this round ! 💻🏆\n";
    computerScore++;
    
    }
    else
    cout << "Invalid choice ! Please enter 1 , 2 or 3.\n";
    
    cout << "\n Current Score : \n You:" << userScore <<" | Computer: "<<computerScore<<"\n";
    cout << "\n Do You want to play another round ? (y/n) :";
    
    cin >> playAgain;
    round++;
    
    }
    
    cout << "\n================Final Result=================\n";
    
    if (userScore > computerScore)
     cout << "🎉 Congratulations! You won the game! 🏆\n";
    else if (userScore < computerScore)
        cout << "💻 The computer wins the match! Better luck next time.\n";
    else
        cout << "🤝 It's a draw overall!\n";

    cout << "Thanks for playing! 👋\n";
    
    return 0;
}