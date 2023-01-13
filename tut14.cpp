#include <iostream>
using namespace std;

// struct employee
//     {
//         /* data */
//         int eId;
//         char favChar;
//         float salary;
//         string name;
//     };
typedef struct employee
    {
        /* data */
        int eId;
        char favChar;
        float salary;
        string name;
    }ep;

union money
{
    /* data */
    int rice;
    char first_character_of_car;
    float pounds;
    // string name;
};


int main()
{
    // struct employee harry;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.name = "Harry";
    // harry.salary = 120000000;
    // union money m1;
    // m1.first_character_of_car = 'c';
    // m1.pounds = 10;
    // m1.rice = 12;
    // cout<<m1.first_character_of_car<<endl;
    // cout<<m1.rice<<endl;
    // cout<<m1.pounds<<endl;
    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;
    // cout<<"The value is "<<harry.name<<endl;

    // enum Meal{breakfast, lunch, dinner};
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    enum values{a = 1, b = 2, c = 3, d};
    values val = a;
    cout<<val;
    

    return 0;
}