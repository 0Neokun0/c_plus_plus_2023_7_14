/*

*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(vector<string> * v) {
    for (auto str: *v)
        cout << str << " ";
    cout << endl;
}

int main()
{
    //Start from below
    vector<string> stooges{"Larry", "Moe", "Curly"};
    display(&stooges);

    cout << endl;

    return 0;
}