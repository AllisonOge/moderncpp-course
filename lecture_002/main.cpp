// calls the declared functions

#include "lecture_002.h"
#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << Greet(name) << endl;
    return 0;
}