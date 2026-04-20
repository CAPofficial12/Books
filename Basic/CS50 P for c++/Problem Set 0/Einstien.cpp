#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    const int c = 300000000;

    string mass;
    cout << "m: ";
    getline(cin, mass);

    int m;
    m = stoi(mass);

    long long E = m * pow(c, 2);
    cout << "E: " << E;

    cin.get();
    return 0;
}