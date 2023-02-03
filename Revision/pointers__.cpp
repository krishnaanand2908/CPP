#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    // What is pointer? ----? data type which holds the address of other data types

    int a = 3;
    int *b = &a;
    system("cls");
    cout<<b<<endl;
    // & ---> (Address of) Operatror
    cout<<"Address of a by using pointer b is "<<b<<endl;
    cout<<"Address of a by using pointer &a is "<<&a<<endl;
    cout<<"The value at address b is "<<*b<<endl;
    cout<<"The value of a is "<<a<<endl;

    // Pointer to Pointer
    int** c = &b;
    cout<<"The adderss of b by using &b is"<<&b<<endl;
    cout<<"The adderss of b by uisng c is"<<&b<<endl;
    cout<<"The value at address c is"<<*c<<endl;
    cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl;


    // * ---> (Dereference) Operatror



    return 0;
}