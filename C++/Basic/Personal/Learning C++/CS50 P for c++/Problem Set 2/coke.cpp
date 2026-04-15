#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <climits>


int main(){
    std::vector<int> denom = {25, 10, 5, INT_MAX};
    int price = 50;
    int coin;
    std::string input;

    while (price > 0){

        std::cout << "Amount Due: " << price << std::endl;
        std::cout << "Insert coin: ";
        getline(std::cin, input);
        coin = std::stoi(input);

        auto in = std::find(denom.begin(), denom.end(), coin);
        if (in == denom.end()){
            coin = 0;
        }

        price -= coin;

    }

    std::cout << "Change Owed: " << -price;
    std::cin.get();
    return 0;
}