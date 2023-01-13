#include <iostream>
using namespace std;
int main()
{
    // What is a pointer? -----> data type which holds the address of other data types
    int a=3;
    int*b = &a;
    // & ---> Address of operator
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;

    // * ---> (value at) Dereference operator
    cout<<"The value at address b is "<<*b<<endl;



    return 0;
}