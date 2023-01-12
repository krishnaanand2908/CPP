#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int a, b, c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter:\n1 for Addition\n2 for Substraction\n3 for Multiplication\n4 for Division\n--> ";
    cin>>c;

    switch (c)
    {
        case 1:
        cout<<a<<" + "<<b<<" = "<<(a+b);
        break;

        case 2:
        cout<<a<<" - "<<b<<" = "<<(a-b);
        break;

        case 3:
        cout<<a<<" x "<<b<<" = "<<(a*b);
        break;

        case 4:
        cout<<a<<" / "<<b<<" = "<<(a/b);
        break;

        default:
        cout<<"Invalid Input!";
        break;

    }

    getch();
    return 0;

}