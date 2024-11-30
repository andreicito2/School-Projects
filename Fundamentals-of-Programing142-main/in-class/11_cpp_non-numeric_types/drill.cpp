#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){

    srand(time(0));

    int x = rand() % 1000;
    int y = rand() % 1000;

    int ans, correct;

    int choice;

    cout << "Which type of problem would you like to try?" << endl;
    cout << "1) Addition" << endl;
    cout << "2) Subtraction" << endl;
    cout << "3) Multiplicaiotn" << endl;
    cout << "====================" << endl;
    cout << "Enter : 1,2,3"<< endl;
    cin >> choice;
    cout << endl;

    char operation = ' ';
switch (choice) {
    case 1:
        operation = '+';
        correct = x+y;
        cout << "Additon Problem" << endl;
        break;

    case 2:
        operation = '-';
        correct = x-y;
        cout << "subtration priblem" << endl;
        break;

    case 3:
        operation = '*';
        correct = x*y;
        cout << "Multiolicaiton problem"<< endl;
        break;
    default:
        operation = ' ';
        correct= 0;
        cout << "Invalid problem" << endl;

}


if (operation != ' '){
    cout << setw(6) << x << endl;
    cout << " " << operation << setw(4) << y << endl;
    cout << "---------" << endl;
    cout << " = "<< endl;
    cin >> ans;
}



    return 0;
}