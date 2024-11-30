#import <iostream>
#import "multiplier_functions.cpp"
#import <vector>
using namespace std;


int main() {
char doAgain = 'y';
while (doAgain == 'y'){
    bool continueFlag = true;
    int num1, num2, acumulator;
    vector<int> sumAtion;
    getNumber(continueFlag, num1);
    getNumber(continueFlag, num2);
    if (continueFlag){
        if (num2 < 0){ // first one negatie track
            if (num1 < 0){ //both negative track
                num1 *= -1;
                num2 *= -1;
                cout << num1 << "," << num2 << endl;
                multiplier(num1, num2, sumAtion);
                acumulator = 0;
                for( int i =0; i < sumAtion.size(); i++){
                    acumulator += sumAtion.at(i);
                    cout << sumAtion.at(i) << "+";
                }
                cout << " = " << acumulator << endl;

            }
            else {// it only num2 is negative
            num2 *= -1;
            cout << num1 << "," << num2 << endl;
            multiplier(num1, num2, sumAtion);
            acumulator = 0;
            for( int i =0; i < sumAtion.size(); i++){
                acumulator += sumAtion.at(i);
                cout << sumAtion.at(i) << "+";
            }
            cout << " = " << acumulator * -1 << endl;
            }

        }
        else {// both postive
        cout << num1 << "," << num2 << endl;
        multiplier(num1, num2, sumAtion);
        acumulator = 0;
        for( int i =0; i < sumAtion.size(); i++){
            acumulator += sumAtion.at(i);
            cout << sumAtion.at(i) << "+";
        }
        cout << " = " << acumulator << endl;
        
        }
        

    }
    cout<< "Type 'y' to continue: "<< endl; 
    cin >> doAgain;
}
std::cout << "Done" << std::endl;
return 0;
}
