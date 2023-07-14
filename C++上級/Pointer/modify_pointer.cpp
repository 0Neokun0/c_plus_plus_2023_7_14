/*
Modify pointer w3schools    
*/
#include <iostream>
using namespace std;

int main()
{
    //Start from below
    string food = "Pizza";
    string* ptr = &food;

   
    cout << food << endl; // Output the value of food

    cout << &food << endl; // Output the memory address

    cout <<  *ptr << endl; // Access the memory address of food and output its value

    *ptr = "Burger"; // Change the value of the pointer

    cout << *ptr << endl; // Output the new value of the pointer (Burger)

    cout << food << endl; // Output the new value of the food variable (Burger)


    return 0;
}