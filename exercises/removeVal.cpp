#include <iostream>
#include <vector>

using namespace std;

int removeVal(vector<int> &nums, int val) {
    int slow = 0;
    for (size_t fast = 0; fast<nums.size(); ++fast) {
        if (nums[fast]!=val) {
            nums[slow] = nums[fast];
            slow++;
        }
    }
    nums.resize(slow);
    return slow;
}

int main() {
    vector<int> nums = {1,2,3,3,3,3,4,4,5,5,};
    removeVal(nums, 3);
    for (int i : nums){
        cout << i << " ";
    }
    cout << '\n';
}
