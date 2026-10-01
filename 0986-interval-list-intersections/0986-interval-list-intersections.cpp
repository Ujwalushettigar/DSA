class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& fl, vector<vector<int>>& sl) {
        if(fl.size()==0 || sl.size()==0)
        {
            return {};
        }
        vector<vector<int>> res;
        int l=0;
        int r=0;
        while(l<fl.size() && r<sl.size())
        {
            int low=max(fl[l][0],sl[r][0]);
            int high=min(fl[l][1],sl[r][1]);
            if(low<=high)
            {
                res.push_back({low,high});
            }
            if(fl[l][1]<sl[r][1])
            {
                l++;
            }
            else
            {
                r++;
            }
        }
        return res;
    }
};