#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int>& num){
    int total = 0, max = 0;

    for (int i: num){
        if (i == 1){
            total += 1;
        } else{
            total = 0;
        }

        if (total > max){
                max = total;
        }
    }

    return max;
}

int main(){
    vector<int> nums = {1,1,0,1,1,1};
    int value = solution(nums);
    cout << value;

    return 0;
}