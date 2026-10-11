#include <iostream>
#include <string>

using namespace std;

int val(char c){
    switch (c){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    return 0;
}

int romanToInt(string s){
    int sum = 0;
    for (int i = 0; i < static_cast<int>(s.size()); i++){
        if (i+1 < static_cast<int>(s.size())){
            if (val(s[i]) < val(s[i+1])){
                sum-=val(s[i]);
            }
            else{
                sum+=val(s[i]);
            }
        }
        else{
            sum+=val(s[i]);
        }
    }
    return sum;
}

int main(){
    string s;
    cout << "Enter a Roman numeral: ";
    cin >> s;
    int result = romanToInt(s);
    cout << "The integer value is: " << result << endl;
}
