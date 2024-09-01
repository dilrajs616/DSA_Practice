#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int len = prices.size();
        int smallest = 0;
        int profit = 0;
        for(int i=1; i<len; i++) {
            if (prices[i] < prices[smallest]) {
                smallest = i;
            }
            if (prices[i] > prices[smallest]) {
                if (prices[i]-prices[smallest] > profit) {
                    profit = prices[i]-prices[smallest];
                }
            }
        }
        return profit;
    }
};

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    Solution ob;
    int profit = ob.maxProfit(prices);
    cout << "profit is: " << profit;
    return 0;
}