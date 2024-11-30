#include <iostream>
#include <cassert>
#include <vector>
#include "multiplier_functions.cpp"
using namespace std;
int main(){
cout << "Starting testing" << endl;
int num;
bool check;
vector<int> sumation;
vector<int> sumation_check;
//test getNumber
num = 'f';
getNumber(check,num);
if (check == false){
    cout << "check 1: succeed" << endl;
}else{
    cout << "check 1: fail" << endl;
}
num = 1;
getNumber(check,num);
if (check == true){
    cout << "check 1: succeed" << endl;
}else{
    cout << "check 1: fail" << endl;
}
//test multiplier
sumation_check = {4,16};
multiplier(4,5, sumation);
if(sumation_check == sumation){
     cout << "check 1: succeed" << endl;
}else{
    cout << "check 1: fail" << endl;
}

sumation_check = {0};
multiplier(0, 4, sumation);
if(sumation_check == sumation){
     cout << "check 1: succeed" << endl;
}else{
    cout << "check 1: fail" << endl;
}




cout << "Testing ends" << endl;
return 0;
}
