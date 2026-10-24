#include <iostream>
#include <vector>

using namespace std;

int keepUnique(vector<int> &nums){
    int slow = 0;
    for (size_t fast = 1; fast<nums.size(); ++fast){
        if (nums[fast]!=nums[slow]){
            ++slow;
            nums[slow] = nums[fast];
        }
    }
    nums.resize(slow+1);
    return slow+1;
}

int main() {
    vector<int> nums = {1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4};
    keepUnique(nums);
    for (int i : nums){
        cout << i << ' ';
    }
    cout << endl;
}
