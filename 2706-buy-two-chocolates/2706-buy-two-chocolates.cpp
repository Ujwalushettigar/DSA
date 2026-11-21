class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int m=money;
        int c=prices[0]+prices[1];
        m=m-prices[0]-prices[1];
        if(m>=0)
        {
            return m;
        }
        return money;
    }
};