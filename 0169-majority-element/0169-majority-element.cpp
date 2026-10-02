class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hash;
        int max=0,ma=0;
        for(int i=0;i<nums.size();i++)
        {
            hash[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(hash[nums[i]]>max)
            {
                max=hash[nums[i]];
                ma=nums[i];
            }
        }
        return ma;
    }
};