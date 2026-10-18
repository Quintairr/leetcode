#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> TwoSum(vector<int>& nums, int target){
    unordered_map<int, int> numMap;
    for (size_t i = 0; i<nums.size(); ++i){
        numMap[nums[i]] = i;
    }
    int a = 0, b =0;
    for (size_t i = 0; i<nums.size(); ++i){
        if (numMap.find(target - nums[i]) != numMap.end() && numMap[target-nums[i]] != i){
            a = i;
            b = numMap[target - nums[i]];
            return {a,b};
        }
    }
    return {};
}

int main (){
    vector<int> nums = {2,7,11,15};
    int target = 9;
    vector<int> res = TwoSum(nums, target);
    for (auto num : res){
        cout << num  << ' ';
    }
    return 0;
}
