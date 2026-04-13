#include <iostream>
#include <string>
#include <vector>

std::string extension_check(std::string name){
    bool exten = false;
    std::string final;
    for (char c: name){

        if (exten == true){
            final = final + c;
        }

        if (c == '.'){
            exten = true;
        }
    }
    
    return final;
}

bool find(auto value, std::vector<std::string> data_set){
    for (auto v: data_set){
        if (v == value){
            return true;
        }
    }

    return false;
}

int main(){
    std::string extension;
    std::cout << "File name: ";
    getline(std::cin, extension);   
    std::string ext = extension_check(extension);    

    std::vector<std::string> all_exts = {"gif", "jpg", "png","jpeg","pdf","txt","zip"};

    std::vector<std::string> image(all_exts.begin() + 0, all_exts.begin() + 3);
    if (find(ext,image)){
        std::cout << "image/" << ext << "\n";
    } else if(find(ext, all_exts)){
        std::cout << "application/" << ext << "\n";
    } else{
        std::cout << "application/octet-stream" << "\n";
    }

    std::cin.get();
    return 0;
} 