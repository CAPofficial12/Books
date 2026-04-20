#include <iostream>
#include <string>
using namespace std;

string to_lower(string in){

    string finale;

    for (char c: in){
        char a = tolower((unsigned char)c);
        finale = finale + a;
    }

    return finale;
}

int main(){

    string ans;
    cout << "Whatr is the Answer tp the Greate Question of Life, the Universe , and everything? ";
    getline(cin, ans);


    if (ans == "42" || to_lower(ans) == "forty two" || to_lower(ans) == "forty-two"){
        cout << "Yes";
    } else{
        cout << "No";
    }

    cin.get();
    return 0;
}