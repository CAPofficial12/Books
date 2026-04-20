#include <iostream>
#include <string>
using namespace std;

string convert(string c){
    if (c == ")"){
        return "🙂";
    } else if (c == "("){
        return "🙁";
    } else{
        return c;
    }

}

int main(){
    string message;
    getline(cin, message);

    for (int a = 0; a < message.length()-1; a++){
        if (message.at(a) == ':'){
            string new_string = convert(string (1, message.at(a+1)));
            message.replace(a, 2, new_string);
        }
    }

    cout << message << endl;

    cin.get();
    return 0;
}