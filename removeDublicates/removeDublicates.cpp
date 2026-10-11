#include <iostream>
#include <vector>

using namespace std;

int removeDublicates(vector<int> &nums){
    int slow = 0;
    for (int fast = 1; fast<static_cast<int>(nums.size()); ++fast){
        if (nums[slow]!=nums[fast]){
            ++slow;
            nums[slow]=nums[fast];
        }
    }
    return slow+1;
}



int main(){
    vector<int> nums{1,1,1,2,2,3,3,3,3,5};
    int length = nums.size();

    length = removeDublicates(nums);
    cout << length << "\n";
    for (int i = 0; i<length; ++i){
        cout << nums[i] << " ";
    }
}
