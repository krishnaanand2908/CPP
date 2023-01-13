#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void factorial()
{
    int fact = 1, n;   
    cout<<"Enter the number to get it's facorial: ";
    cin>>n;
    
    if (n>=0)
    {
        for (int i = 1;i<=n; i++)
        {
            fact *= i;
        }
        cout<<n<<"!"<<" = "<<fact;
    }
    else
    {
        cout<<"Please Enter a whole number!";
    }
}

int main()
{
    system("cls");
    string choice;
    while(true)
    {
        factorial(); 
        cout<<"\nPress Enter to continue else press any key+Enter to quit: ";
        cin>>choice;
        if (choice == "")
        {
            continue;
        }
        else
        {   
            cout<<"Thanks for using this Program\n";
            break;
        }
    }
    factorial();
    cout<<endl;
    getch();
    return 0;
}