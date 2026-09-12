class Solution {
public:
    void fC(int i,vector<int>& cd,int t,vector<vector<int>>& res,vector<int>& ds)
    {
        if(i==cd.size())
        {
            if(t==0)
            {
                res.push_back(ds);
            }
            return;
        }
        if(cd[i]<=t)
        {
            ds.push_back(cd[i]);
            fC(i,cd,t-cd[i],res,ds);
            ds.pop_back();
        }
        fC(i+1,cd,t,res,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        fC(0,candidates,target,res,ds);
        return res;
    }
};