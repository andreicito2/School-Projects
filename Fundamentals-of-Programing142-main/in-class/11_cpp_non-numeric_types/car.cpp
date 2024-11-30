#include <iostream>
using namespace std;

int main(){

    int carYear;
    cout << "Enter you car year: ";
    cin >> carYear;

if (carYear > 1967){
    cout << "Probubly has few safety featurnes."<< endl;
} if (carYear > 1970){
    cout << "pribubly has head rests."<< endl;
} if (carYear > 1991){
    cout << "probably had ABS."<< endl;
} if (carYear > 2001){
    cout << "Probubly has airbags"<< endl;
}

    return 0;
}