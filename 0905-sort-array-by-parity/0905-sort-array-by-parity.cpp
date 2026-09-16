class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // vector<int> pos;
        // vector<int> ans;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]%2==0)
        //     {
        //         pos.push_back(nums[i]);
        //     }
        //     else
        //     {
        //         ans.push_back(nums[i]);
        //     }
        // }
        // pos.insert(pos.end(),ans.begin(),ans.end());
        // return pos;
        int l=0,r=nums.size()-1;
        while(l<r)
        {
            if(nums[l]%2==1 && nums[r]%2==0)
            {
                swap(nums[l],nums[r]);
                l++;
                r--;
            }
            else if(nums[r]%2==1)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
        return nums;
    }
};