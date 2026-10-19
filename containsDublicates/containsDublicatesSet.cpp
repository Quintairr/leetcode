#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;


int main(){
    vector<int> nums;
    int t = 0;
    while (cin >> t){
        nums.push_back(t);
    }

    unordered_set<int> set;
    for (auto i : nums){
        if (set.count(i) == 1){
            cout << "true";
            return 0;
        }
        set.insert(i);
    }
    cout << "false";
    return 1;
}
