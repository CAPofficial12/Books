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
    string input;
    int price;
    cout << "Greeting: ";
    getline(cin, input);
    string news = to_lower(input);

    if (!news.find("hello")){
        price = 0;
    } else if (tolower((unsigned char)input[0]) == 'h'){
        price = 20;
    } else{
        price = 100;
    }

    cout << "$" << price;

    cin.get();
    return 0;
}