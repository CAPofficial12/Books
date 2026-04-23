#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> solution(vector<int>& nums){
    vector<int> refer;
    vector<int> final;
    vector<int> rep = nums;

    int value = 0;
    int inx = 0;
    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++){
        refer.push_back(i);
    }

    for(int i = 0; i <= nums.size()-1; i++){
        if(refer[i] != nums[i] && value == 0){
            value = rep[i];
        }

        if (nums[i] == nums [i+1] && inx == 0){
            auto it = find(rep.begin(), rep.end(), nums[i]);
            inx = distance(rep.begin(), it)+1; 
        }
    }

    vector<int> ans = {inx, value};
    return ans;
}

int main(){
    vector<int> test = {2,3,4,6,5,3};
    vector<int> ans = solution(test);
    for (int i:ans){
        cout << i << endl;
    }

    return 0;
}