#include<iostream>
#include<string>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s == "") {
            return true;
        }
        int tlen = t.length();
        int slen = s.length();
        int tptr = 0;
        int sptr = 0;
        while(tptr < tlen && sptr < slen) {
            if (t[tptr] == s[sptr]) {
                sptr++;
                if (sptr == slen) {
                    return true;
                }
            }
            tptr++;
        }
        return false;
    }
};

int main() {

    return 0;
}