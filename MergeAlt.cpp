#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len = word1.length() + word2.length();
        string word3;
        int ptr1 = 0;
        int ptr2 = 0;
        while(ptr1 < word1.length() || ptr2 < word2.length()) {
            if (ptr1 < word1.length()) {
                    word3 = word3 + word1[ptr1];
                    ptr1++;
            }
            if (ptr2 < word2.length()) {
                word3 = word3 + word2[ptr2];
                ptr2++;
            }
        }
        return word3;
    }
};

int main(){
    

    return 0;
}
