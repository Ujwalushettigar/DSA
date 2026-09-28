class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        if (n <= 3) return true;
        if (n % 2 == 0 || n % 3 == 0) return false;

        for (int i = 5; (long long)i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n=nums.size();
        int m=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i][i]>m && isPrime(nums[i][i]))
            {
                m=nums[i][i];
            }
            if(nums[n-i-1][i]>m && isPrime(nums[n-i-1][i]))
            {
                m=nums[n-i-1][i];
            }
        }
        return m;
    }
};