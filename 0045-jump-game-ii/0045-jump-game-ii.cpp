class Solution {
public:
    int jump(vector<int>& nums) {
        int j=0,c=0,f=0;
        if(nums.size()==1)
        {
            return 0;
        }
        for(int i=0;i<nums.size();i++)
        {
            f=max(f,i+nums[i]);
            if(i==c)
            {
                j++;
                c=f;
                if(c==nums.size()-1)
                {
                    return j;
                }
            }
        }
        return j;
    }
};