#include <bits/stdc++.h>
#include <chrono>
#include <iostream>
#include <string>
#include <thread>
#include <limits>
using namespace std;

int playAgain(){
    bool loop1 = true;;
    while(loop1){
        int userChoice;
        cout << endl;
        cout << "Play again? " << endl;
        cout << "1. Yes" << endl;
        cout << "2. Return to menu" << endl;
        cout << endl;
        cout << "Your choice: ";
        cin >> userChoice;
        cout << endl;

        if(cin.fail() || userChoice != 1 && userChoice != 2){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice. Try again." << endl;
            continue;
        }
        if(userChoice == 1){
            cout << "Starting another round..." << endl;
            for(int i = 0; i < 3; i++){
                cout << "." << flush;
                this_thread::sleep_for(chrono::seconds(1));
            }
            return 1;
        }
        else if(userChoice == 2){
            cout << "Returning to main menu..." << endl;
            for(int i = 0; i < 3; i++){
                cout << "." << flush;
                this_thread::sleep_for(chrono::seconds(1));
            }
            return 2;
        }
    }
}
void playGame(){
    bool loop2 = true;
    while(loop2){
        cout << endl;
        cout << endl;
        int userMove;
        cout << "Choose your move: " << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << endl;
        cout << "Your choice: ";
        cin >> userMove;
        cout << endl;
        // if they fail to input valid inputs
        if(cin.fail() || userMove != 1 && userMove != 2 && userMove != 3){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid choice. Try again." << endl;
            continue;
        }
        //if the user chooses an option 1-3
        if(userMove == 1){
            cout << "You chose Rock! " << endl;
        }
        else if(userMove == 2){
            cout << "You chose Paper! " << endl;
        }
        else if(userMove == 3){
            cout << "You chose Scissors! " << endl;
        }
        cout << endl;
        int computerRand = rand() % 3 + 1;
        //if the computer chooses a random option 1-3
        if(computerRand == 1){
            cout << "Computer chose Rock!" << endl;
        }
        else if(computerRand == 2){
            cout << "Computer chose Paper!" << endl;
    
        }
        else if(computerRand == 3){
            cout << "Computer chose Scissors!" << endl;
        }
        cout << endl;
        cout << endl;
        //winning logic
        if(userMove == computerRand){
            cout << "==========" << endl;
            cout << "Its a tie!" << endl;
            cout << "==========" << endl;
        }
        else if(userMove == 1 && computerRand == 3){
            cout << "========" << endl;
            cout << "You win!" << endl;
            cout << "========" << endl;
        }
        else if(userMove == 2 && computerRand == 1){
            cout << "========" << endl;
            cout << "You win!" << endl;
            cout << "========" << endl;
        }
        else if(userMove == 3 && computerRand == 2){
            cout << "========" << endl;
            cout << "You win!" << endl;
            cout << "========" << endl;
        }
        else{
            cout << "==============" << endl;
            cout << "Computer wins!" << endl;
            cout << "==============" << endl;
        }

        int choice = playAgain();
        if(choice == 2){
            break;
        }
    }
}
void menu(){
    cout << endl;
    cout << "=======================" << endl;
    cout << "  ROCK PAPER SCiSSORS  " << endl;
    cout << "=======================" << endl;
    cout << "1. PLAY" << endl;
    cout << "2. QUIT" << endl;
}

int main(){
    int userChoice;
    bool loop1 = true;
    srand(time(NULL));
    while(loop1){
        menu();
        cout << endl << "Enter your choice: ";
        cin >>userChoice;
        // if the user fails to input valid inputs
        if(cin.fail() || userChoice != 1 && userChoice != 2){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << endl;
            cout << "Invalid choice. Try again." << endl;
            continue;
        }
        // this is my if statement for the menu
        if(userChoice == 1){
            cout << endl;
            cout << "Starting game..." << endl;
            for(int i = 0; i<3; i++){
                cout << "." << flush;
                this_thread::sleep_for(chrono::seconds(1));
            }
            cout << endl;
            playGame();
            cout << endl;
        }
        else if(userChoice == 2){
            cout << endl;
            cout << "GAME END." << endl;
            return 0;
        }
    }
}