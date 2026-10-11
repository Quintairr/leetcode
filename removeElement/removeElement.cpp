#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int> &nums, int val){

    int slow = 0;
    for (int fast = 0; fast < static_cast<int>(nums.size()); fast++){
        if (nums[fast] != val){
            nums[slow] = nums[fast];
            slow++;
        }
    }

    return slow;
}



int main(){

    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val =2;
    int k = removeElement(nums, val);
    cout << k << "\n";
    for (int i = 0; i < k; i++){
        cout << nums[i] << " ";
    }
}
