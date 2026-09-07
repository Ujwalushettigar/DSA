class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int sum=0;
            while(num!=0)
            {
                int rem=num%10;
                sum+=rem;
                num/=10;
            }
            res.push_back(sum);
        }
        return *min_element(res.begin(),res.end());
    }
};