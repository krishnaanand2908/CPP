#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    system("cls");

    int n = 6;
    int i = 1;

    do
    {
        cout<<n<<" x "<<i<<" = "<<(n*i)<<endl;
        i++;
    } while (i!=11);
    

    getch();
    return 0;
}