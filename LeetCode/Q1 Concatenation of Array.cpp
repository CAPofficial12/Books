#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int>& nums){
    vector<int> result = {};
    for (int i = 0; i < 2; i++){
        for (int i: nums){
            result.push_back(i);
        }
    }

    return result;
}

int main(){
    vector<int> nums= {1,2,1};
    vector<int> ans= solution(nums);

    for (int c:ans){
        cout << c << '\n';
    }
    return 0;
}