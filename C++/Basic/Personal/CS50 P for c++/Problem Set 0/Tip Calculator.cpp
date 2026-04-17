#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


int dollars_to_float(string p){
    p.erase(0,1);
    int final = stoi(p);
    return final;
}

float percent_to_float(string p){
    p.erase(p.length() - 1, 1);
    float final = stoi(p);
    return final/100;
}

int main(){

    string dollar;
    string percent;

    cout << "How much was the meal? ";
    getline(cin, dollar);
    int price = dollars_to_float(dollar);
    cout << "What percentage would you like to tip? ";
    getline(cin, percent);
    float share = percent_to_float(percent);

    float tip = price*share;
    cout << "Leave $" << fixed << setprecision(2) << tip << endl;

    cin.get();
    return 0;
}