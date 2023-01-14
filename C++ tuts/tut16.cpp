#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a+b;
    return c;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// void swapPointer(int* a, int* b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

void swapPointer(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


int main()
{
    int a=4, b=5;
    swapPointer(a, b);
    cout<<a<<endl;
    cout<<b<<endl;
    // cout<<"The sum of 4 and 5 is "<<sum(4, 5);
    return 0;
}
