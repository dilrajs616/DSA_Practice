#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

class Solution {
public:
    std::unordered_map<char, int> umap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int getValue(char a, char b) {
        int val;
        val = umap[a];
        if(umap[a] < umap[b]) {
            val *= -1;
        }
        return val;
    }


    int romanToInt(string s) {
        int num = 0;
        int len = s.length();
        for(int i=0; i<len; i++) {
            if(len-i>1) {
                int val = getValue(s[i], s[i+1]);
                num += val;
            }
            else {
                num += umap[s[i]];
            }
        }
        return num;
    }
};