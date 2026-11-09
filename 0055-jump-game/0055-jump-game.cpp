class Solution {
public:
    bool canJump(vector<int>& nums) {
        // int r=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(i>r)
        //     {
        //         return false;
        //     }
        //     r=max(r,i+nums[i]);
        // }
        // return true;
        int g=nums.size()-1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            if(i+nums[i]>=g)
            {
                g=i;
            }
        }
        return g==0;
    }
};