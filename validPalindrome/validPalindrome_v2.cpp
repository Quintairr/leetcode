#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool f(const string &s){
    int l = 0;
    int r = static_cast<int>(s.size())-1;

    while (l < r){
        while(!isalnum(s[l]) && l<r) {
            ++l;
        }
        while (!isalnum(s[r]) && l<r) {
            --r;
        }

        if (isalnum(s[l]) && isalnum(s[r])){
            if (tolower(s[l]) != tolower(s[r])){
                return false;
            }
        }
        ++l; --r;
    }
    return true;
}


int main() {
    const string s = "    ???";
    bool res = f(s);
    if (res){
        cout << "true" << "\n";
    }
    else{
        cout << "false" << '\n';
    }

    return 0;
}
