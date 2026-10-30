class Solution {
public:
    int coinChange(vector<int>& coins, int amt) {
        vector<int> dp(amt+1,amt+1);
        dp[0]=0;
        for(int i:coins)
        {
            for(int j=i;j<=amt;j++)
            {
                dp[j]=min(dp[j],dp[j-i]+1);
            }
        }
        if(dp[amt]>amt)
        {
            return -1;
        }
        return dp[amt];
    }
};