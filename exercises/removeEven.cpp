#include <vector>
#include <iostream>

using namespace std;

int removeEven(vector<int> &nums) { // удалаяет все четные числа возвращает длину массива
    int slow = 0;
    for (size_t fast = 0; fast<nums.size(); ++fast) {
        if (nums[fast] % 2 == 1){
            nums[slow] = nums[fast];
            ++slow;
        }
    }
    nums.resize(slow);
    return slow;
}


int main() {
    vector<int> nums = {0,1,2,3,4,5,6,7};
    removeEven(nums);
    for (int c : nums){
        cout << c << " ";
    }
}
