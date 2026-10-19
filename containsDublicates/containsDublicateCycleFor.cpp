#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    vector<int> nums;
    int t = 0;
    while(cin >> t){
        nums.push_back(t);
    }

    sort(nums.begin(), nums.end());
    for (size_t i = 0; i<nums.size()-1; ++i){
        if (nums[i]==nums[i+1]){
            cout << "true";
            return 1;
        }
    }
    cout << "false";
    return 0;
}
