class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int n=spells.size();
        int m=potions.size();
        vector<int> res;
        sort(potions.begin(),potions.end());
        for(int i=0;i<n;i++)
        {
            int l=0,r=m-1;
            int mid=0;
            while(l<=r)
            {
                mid=(r+l)/2;
                if((long long)spells[i]*potions[mid]>=success)
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
            }
            res.push_back(m-l);
        }
        return res;
    }
};