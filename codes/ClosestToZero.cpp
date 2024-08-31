#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int length = nums.size();
        int smallest = 0;
        for(int i=0; i<length; i++) {
            if (abs(nums[i]) < abs(nums[smallest])) {
                smallest = i;
            }
            if (abs(nums[i]) == abs(nums[smallest])) {
                if (nums[smallest] < nums[i]){
                    smallest = i;
                }
            }
        }
        return nums[smallest];
    }
};

int main(){
    
    vector<int> nums = {-4,-2,1,4,8};

    Solution sol;
    cout<<sol.findClosestNumber(nums);
    return 0;
}