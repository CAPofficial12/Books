#include <iostream>
#include <chrono>

int main(){
    int a = 0;
    auto start = std::chrono::high_resolution_clock::now();
    while (a < 10000000){
        a++;
    }

   auto end = std::chrono::high_resolution_clock::now();

   auto diff = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
   std::cout << "Time elapsed: " << diff.count() << " ms" << std::endl;

   return 0;
}
