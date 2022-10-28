#include <iostream>
#include <string>

using namespace std;

int menu(){
    cout << endl << "....................................................................." << endl;
    cout << "Chouse your hero:" << endl;
    cout << "1 - Exit." << endl;
    cout << "2 - Create with level of signal." << endl;
    cout << "3 - Create with ASCII" << endl;
    cout << "4 - Show for you." << endl;
    cout << "5 - Union." << endl;
    cout << "6 - Replacement." << endl;
    cout << "7 - Copy." << endl;
    cout << "8 - Move to left." << endl;
    cout << "9 - Move to right." << endl;
    cout << endl << "....................................................................." << endl;
    double choice{0};
    cin >> choice;
    if(cin.fail() || choice > 9 || choice < 0) {
        cin.clear();
        cin.ignore();
        cout << "Incorrect input! Repeat please!" << endl;
    }
    return choice;
}
