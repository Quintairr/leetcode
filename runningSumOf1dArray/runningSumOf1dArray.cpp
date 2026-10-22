#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>


using namespace std;


vector <int> f(vector<int> &nums){
    vector<int> sum(nums.size(), 0);
    sum[0] = nums[0];
    for (size_t i = 1; i<nums.size(); ++i){
        sum[i] = nums[i] + sum[i-1];
    }
    return sum;
}

int main(){
    vector<int> nums = {3,1,2,10,1};
    auto res = f(nums);
    for (auto c : res){
        cout << c << " ";
    }
    return 0;
}
