class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sl=0;
        for(int ri=1;ri<nums.size();ri++)
        {
            if(nums[sl]!=nums[ri])
            {
                sl++;
                nums[sl]=nums[ri];
            }
        }
        return sl+1;
    }
};