#include <iostream>

using namespace std;

int main(){
    string street;
    string city, state, zipcode;
    cout << "what is your street name?" << endl;
    getline(cin, street);
    cout << "what is your city, state, and zipcode?" << endl;
    cin >> city >> state >> zipcode;

    cout << endl << street << endl << city << ", " << state << ", " << zipcode << endl;


    return 0;
}