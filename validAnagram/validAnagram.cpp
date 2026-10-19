#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;


int main(){
    string s,t;
    cin >> s;
    cin >> t;
    unordered_map<char, int> tm;
    unordered_map<char,int> sm;

    if (s.length()==t.length()){
        for (size_t i = 0; i<s.length(); ++i){
            sm[s[i]]++;
            tm[t[i]]++;
        }
    }
    else{
        cout << "false";
        return 1;
    }
    for(char c : s){
        if (tm.find(c)==tm.end() || tm[c]!=sm[c]){
            cout << "false";
            return 1;
        }
    }
    cout << "true";
    return 0;
}
