class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
        if(o.size()!=m*n)
        {
            return {};
        }
        int k=0;
        vector<vector<int>> res(m,vector<int>(n));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                res[i][j]=o[k++];
            }
        }
        return res;
    }
};