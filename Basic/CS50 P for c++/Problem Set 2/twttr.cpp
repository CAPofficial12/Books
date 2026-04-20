#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main(){
    std::string input;
    std::string output;
    std::vector<char> vowels = {'a', 'e', 'i', 'o', 'u', '1'};

    getline(std::cin, input);

    for (char c: input){
        char lower = std::tolower(c);
        auto temp = std::find(vowels.begin(), vowels.end(), lower);

        if (temp == vowels.end()){
            output += c;
        }

    }
    std::cout << output;

    std::cin.get();
    return 0;
}