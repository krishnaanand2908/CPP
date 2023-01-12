/*  
    Controle Structures:
        Sequence Structure
        Selection Structure
        Loop Structure
*/
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main(){
    system("cls");
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age<18)
    {
        cout<<"You cannot Drive!";
    }
    else if (age==17)
    {
        cout<<"You shall get a learning liscence now!";
    }
    else if (age>100)
    {
        cout<<"Most probrably you are dead!\nThus, you cannot drive!";
    }
    else
    {
        cout<<"You can Drive!";
    }
    getch();
    
}