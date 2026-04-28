#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        string r_t = "";
        for(int i = 0; i<s.length();i++){
            if(std::isalnum(s[i])){
                t+=(char)tolower(s[i]);
                r_t = (char)tolower(s[i]) + r_t;
            }
        }
        return t == r_t;
    }
};