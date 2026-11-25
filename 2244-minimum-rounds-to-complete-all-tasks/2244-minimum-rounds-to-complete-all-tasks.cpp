class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        for(int i:tasks)
        {
            mp[i]++;
        }
        int res=0;
        for(auto x:mp)
        {
            int cnt=x.second;
            if(cnt==1)
            {
                return -1;
            }
            res+=(cnt+2)/3;
        }
        return res;
    }
};