class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int m=nums[n-1];
        vector<int> res;
        for(int i=1;i<=m;i++)
        {
            res.push_back(i);
        }
        res.push_back(m);
        return res==nums;
    }
};