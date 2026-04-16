#include <iostream>
#include <string>
#include <cctype>

bool valid(std::string plate){

    //Start check
    if (isalpha(plate[0]) != 1 && isalpha(plate[1]) != 1){
        return false;
    }

    //Length Check

    if(plate.length() < 2 || plate.length() > 6){
        std::cout << plate.length();
        return false;
    }

    bool start = false;
    for (char c:plate){
        //Num start check

        if (isdigit(c) && start == false){
            return (c != 48);
        }

        if (start && isalpha(c)){
            return false;
        }

        if (!isalnum(c)){
            return false;
        }
        
    }

    return true;
}

int main(){
    
    std::string inut;
    std::cout << "Plate: ";

    getline(std::cin, inut);

    bool result = valid(inut);
    if (result){
        std::cout << "Valid";
    } else {
        std::cout << "Invalid";
    }

    std::cin.get();
    return 0;
}