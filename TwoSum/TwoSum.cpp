#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> TwoSum(vector<int>& nums, int target){
    unordered_map<int, int> numMap;
    for (size_t i = 0; i<nums.size(); ++i){
        if (numMap.find(target-nums[i]) != numMap.end() && numMap[target-nums[i]] != i){
            return {i, numMap[target-nums[i]]};
        }
        numMap[nums[i]] = i;
    }
    return {};
}

int main (){
    vector<int> nums = {2,7,11,15};
    int target = 18;
    vector<int> res = TwoSum(nums, target);
    for (auto num : res){
        cout << num  << ' ';
    }
    return 0;
}
