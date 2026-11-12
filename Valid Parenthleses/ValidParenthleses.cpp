#include <iostream>
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

bool isValid(string s){
    unordered_map<char, char> parentheses = {
        {')', '('},
        {']', '['},
        {'}', '{'}
    };
    stack<char> st;
    for (char c: s){
        if (!st.empty()){
            if (parentheses[c] == st.top()){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        else{
            st.push(c);
        }
    }
    return st.empty();
}


int main() {
    string s = "{[()]}";
    if (isValid(s)) {
        cout << "The string is valid." << endl;
    } else {
        cout << "The string is not valid." << endl;
    }

    return 0;
}