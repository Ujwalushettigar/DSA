class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        vector<int> ps;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            ps.push_back(sum);
        }
        int cnt=0;
        for(int i:ps)
        {
            if(i==0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};