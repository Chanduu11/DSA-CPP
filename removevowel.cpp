#include<iostream>
using namespace std;

bool isVowel(char ch) { 
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

string solve(string s) {
    int n = s.length();
    if(n == 0) return ""; 
    
    string ans = "";
    ans += s[0];  

    for(int i = 1; i < n - 1; i++) { 
        if(isVowel(s[i]) && !isVowel(s[i-1]) && !isVowel(s[i+1])) {
            continue;
        } 
        ans += s[i];
    }

    ans += s[n-1];  
    return ans;
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);   
    cout << "Result: " << solve(s) << endl;
    return 0;
}
