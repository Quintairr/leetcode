#include <iostream>
#include <vector>
#include <numeric>

using namespace std;


double findMaxAverage(vector<int>& nums, int k) {
    int r = k-1;
    double sum = 0;
    sum = accumulate(nums.begin(), nums.begin()+k, 0);
    r++;
    cout << sum << '\n';
    double mSum = sum;
    for (size_t i = 1; i<nums.size()-k+1; ++i){
        sum-=nums[i-1];
        sum+=nums[r];
        if (sum>mSum){
            mSum = sum;
        }
        r++;
    }
    return mSum/k;
}

int main(){
    vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    auto res = findMaxAverage(nums,k);
    cout << res << '\n';

    return 0;
}
