#include <iostream>
#include <string>

int main(){

    std::string initial;
    std::string final;

    getline(std::cin, initial);

    for (char c: initial){

        if (std::isupper(c)){
            final = final + "_";
            char a = std::tolower(c);
            final = final + a;
        } else {
            final = final + c;
        }
    }

    std::cout << final;
    std::cin.get();
    return 0;
}