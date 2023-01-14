#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

using namespace std;

void guess_game(int upper_limit, int lower_limit)
{
    system("cls");
    srand(time(0));
    int number = rand() % upper_limit + lower_limit;
    int user_input, number_of_turns=1, max_turns=9;
    cout<<"A random integer is generated between "<<lower_limit<<" and "<<upper_limit<<".\nYou have to guess it! ALL THE BEST PLAYER"<<endl;
    while(number_of_turns<=max_turns)
    {
        cout<<"Turn: "<<number_of_turns<<" || Turns left: "<<((max_turns+1)-number_of_turns)<<"\nEnter your guess: ";
        cin>>user_input;
        if (user_input<lower_limit)
        {
            cout<<"Please Enter a number greater than or equals to "<<lower_limit<<"!\n";
            continue;
        }
        else if(user_input>upper_limit)
        {
            cout<<"Please Enter a number lesser than or equals to "<<upper_limit<<endl;
            continue;
        }
        else if(user_input == number)
        {
            cout<<"Congratulations! You have guessed the number!\nYou took "<<number_of_turns<<" turns!";
            break;
        }
        else if(user_input<number)
        {
            cout<<"The number which you have entered is lesser than the number to be guessed!\n";
        }
        else
        {
            cout<<"The number which you have entered is greater than the number to be guessed!\n";
        }
        number_of_turns++;

    if (number_of_turns == max_turns)
    {
        cout<<"You Loose!\nThe number was "<<number<<endl<<"Press Enter to continue: ";
        getch();
    }
    }
}

int main()
{
    system("cls");
    while (true)
    {
        cout<<"Press Enter to continue: ";
        getch();
        guess_game(100, 1);
    }
    
    
    getch();
    return 0;
}