#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <algorithm>
using namespace std;

vector<vector<int>> f(vector<int> &nums){
    unordered_map<int,int> numMap;
    set<vector<int>> res;
    for (size_t i = 0; i<nums.size(); ++i){
        numMap[nums[i]] = i;
    }
    for (size_t i = 0; i < nums.size(); ++i){
        for (size_t j = i+1; j<nums.size(); ++j){
            int target = 0-nums[i];
            if (numMap.find(target - nums[j]) != numMap.end() && numMap[target - nums[j]] > j){
                vector<int> temp = {nums[i], nums[j], target- nums[j]};
                sort(temp.begin(), temp.end());
                res.emplace(temp);
            }
        }
    }
    vector<vector<int>> ans (res.begin(), res.end());
    return ans;
}

int main(){
    vector<int> nums = {1,2,-2,-1};
    vector<vector<int>> res = f(nums);
    for (auto i : res){
        for (auto j : i){
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}
