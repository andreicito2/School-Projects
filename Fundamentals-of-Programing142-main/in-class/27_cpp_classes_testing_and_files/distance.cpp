/*************************************************************************
 *
 * In-Class Exercise: Middle-Earth
 *
 * File Name: distance.cpp
 * Username:  ?
 * Username:  ?
 * Course:    CPTR 142
 *
 */

#include <iostream>

class Walk {
public:
    int miles, feet;
    Walk(int milesWeek = 0, int feetWeek = 0);
    
    // TODO Create an operator overloading constructor to add miles and feet together
    Walk operator+(Walk);

    void print();
};

Walk::Walk(int milesWeek, int feetWeek) {
    miles = milesWeek;
    feet = feetWeek;
}

    // TODO Define an operator overloading constructor to add miles and feet together
Walk Walk::operator+(Walk add){
Walk total;
total.miles = this->miles + add.miles;
total.feet = this->feet + add.feet;
return total;
    
}


void Walk::print() {
    std::cout << "Together they walked " << miles << " miles and " << feet << " feet." << std::endl;
}

int main()
{
    Walk week1(10, 5);
    Walk week2(20, 6);
    Walk totalMiles = week1 + week2;
    totalMiles.print();
}