#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool f(string s){
    int slow = 0;
    for (auto fast = 0; fast<s.length() ; ++fast){
        if(isalnum(s[fast]) && !isspace(s[fast])){
            s[slow]=s[fast];
            ++slow;
        }
    }
    s.resize(slow);




    for (size_t i = 0; i<s.length(); ++i){
        s[i] = tolower(s[i]);
    }
    int r = s.length()-1;
    for (int l=0; l<=r; ++l){
        if (s[l]!=s[r]){
            return false;
        }
        else{
            --r;
        }
    }
    return true;
}





int main(){
    bool res = f("0p");
    if (res){
        cout << "true";
    }
    else{
        cout << "false";
    }
    return 0;
}
