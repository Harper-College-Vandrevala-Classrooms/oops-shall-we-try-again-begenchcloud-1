#include <iostream>

using namespace std;



int prompt(int lowerBound, int upperBound, string message, string error_message){
    int input;
    bool valid = false;

    while (!valid) {
        cout << message << endl;
        cin >> input;

        if (cin.fail() || input < lowerBound || input > upperBound) {
            cout << error_message << endl;
            cin.clear();
            cin.ignore();
        } else {
            valid = true;
        }
    }

    return input;


}

int main(){

    int value = prompt(0, 100, "Please enter a value", "Your value is invalid");
    cout << "The value chosen by the user is " << value << endl;

    return 0;
}