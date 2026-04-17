#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <ranges>

int main(){
    std::unordered_map<std::string,int> Foods = {
    {"Apple", 130},
    {"Avacado", 50},
    {"Banana", 110},
    {"Cantaloupe", 50},
    {"Grapefruit", 60},
    {"Grapes", 90},
    {"HoneyDew Melon", 50},
    {"Kiwifruit", 90},
    {"Lemon", 15},
    {"Lime", 20},
    {"Nectarine", 60},
    {"Orange", 80},
    {"Peach", 60},
    {"Pear", 100},
    {"Plums", 70},
    {"Strawberries", 50},
    {"Sweet Cherries", 100},
    {"Tangerine", 50},
    {"Watermelon", 80}
    };

    
    std::string fruit;
    std::cout << "Item: ";
    getline(std::cin, fruit);

    auto keys = std::views::keys(Foods);
    
    auto temp = std::find(keys.begin(), keys.end(), fruit);
    if (temp != keys.end()){
        std::cout << "Calories: " << Foods[fruit];
    }
        
    return 0;
}