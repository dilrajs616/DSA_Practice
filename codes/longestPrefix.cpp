#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Solution {
public:
    string matchString(string first, string second) {
        int length = first.length();
        string prefix = "";
        for (int i=0; i<length; i++) {
            if (first[i] == second[i]) {
                prefix += first[i];
            }
            else {
                break;
            }
        }
        return prefix;
    }

    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        int length = strs.size();
        for (int i=1; i<length; i++) {
            prefix = matchString(prefix, strs[i]);
            if (prefix == "") {
                break;
            }
        }
        return prefix;
    }
};

int main () {

    return 0;
}