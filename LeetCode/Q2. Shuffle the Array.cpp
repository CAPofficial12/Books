#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<int>& nums, int n){
    vector<int> result = {};

    for (int i = 0; i < n; i++){
        result.push_back(nums[i]);
        result.push_back(nums[i+n]);
    }

    return result;
}

int main(){

    vector<int> nums = {2,5,1,3,4,7};
    int n = 3;

    vector<int> ans = solution(nums, n);

 

    for (int c:ans){
        cout << c;
    }
    return 0;
}