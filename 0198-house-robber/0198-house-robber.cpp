class Solution {
public:
    int rob(vector<int>& nums) {
        int m1=0,m2=0;
        for(int i=0;i<nums.size();i++)
        {
            int c=max(m1,m2+nums[i]);
            m2=m1;
            m1=c;
        }
        return m1;
    }
};