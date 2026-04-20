#include <iostream>
#include <string>
#include <vector>


std::vector<std::string> split(std::string calc){
    std::vector<std::string> values;

    int pos1 = 0;

    for (int i = 0;i < calc.length(); i++){
        if (calc[i] == ' '){
            std::string temp = calc.substr(pos1, i);
            values.push_back(temp);
            pos1 = i;
        }

    }

    return values;
}

int main(){

    std::string calc;
    std::cout << "Expression: ";
    getline(std::cin, calc);
    calc = calc + " ";
    std::vector ts = split(calc);

    int x = std::stoi(ts[0]);
    int z = std::stoi(ts[2]);
    std::string y = ts[1];

    double ans;
    if (y == " + "){
        ans = x + z;
    } else if (y == " - "){
        ans = x - z;
    } else if (y == " * "){
        ans = x * z;
    } else if (y == " / "){
        ans = x / z;
    }
    std::cout << ans;

    std::cin.get();
    return 0;
}