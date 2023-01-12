#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    system("cls");
    srand(0);
    int n = rand() % 100 + 1;
    cout << "A random integer is generated between 1 to 100! Can you guess it?\nYou will only get 9 chances.\nEnjoy :)" << endl;
    int number_of_turns = 1;
    int i = 0;
    while (number_of_turns <= 9)
    {
        int user_input;
        cout << "Turn(s): " << number_of_turns << endl;
        cout << "Enter the number: ";
        cin >> user_input;
        if (user_input == n)
        {
            cout << "Congratulations! You have guessed the number!\nYou took " << (number_of_turns) << " number of turns to guess it!" << endl;
            break;
        }
        else if (user_input > n)
        {
            cout << "The number you have entered is greater than the number to be guessed " << endl;
        }
        else
        {
            cout << "The number you have entered is smaller than the number to be guessed " << endl;
        }
        i++;
        number_of_turns++;
    }
    if (number_of_turns > 9)
    {
        cout << "You Loose!\nThe number was " << n;
    }
    getch();
    return 0;
}