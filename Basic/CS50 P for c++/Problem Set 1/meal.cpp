#include <iostream>
#include <string>

int covert_24(std::string time){

    int pos;
    int ihour;

    for (char c: time){
        if (c == ':'){
            pos = time.find(c);
        }
    }

    std::string hour;
    hour = time.substr(0, pos);
    ihour = std::stoi(hour);

    return ihour;
}

int main(){
    std::string time;
    std::cout << "What time is it? ";
    getline(std::cin, time);

    int hour {covert_24(time)};

    if (time.find("pm") != std::string::npos){
        hour += 12;
    }

    if (hour >= 7 && hour <= 8){
        std::cout << "breakfast time";
    } else if (hour >= 12 && hour <= 13){
        std::cout << "lunch time";
    } else if (hour >= 18 && hour <= 19){
        std::cout << "dinner time";
    }

    std::cin.get();
    return 0;
}