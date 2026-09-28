class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& o, int m, int n) {
        vector<vector<int>> res(m,vector<int>(n));
        int i=0;
        int k=0;
        if(o.size()!=m*n)
        {
            return {};
        }
        // while(i<m)
        // {
        //     int j=0;
        //     while(j<n)
        //     {
        //         res[i][j]=o[k++];
        //         j++;
        //     }
        //     i++;
        // }
        for(int  i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                res[i][j]=o[k++];
            }
        }
        return res;
    }
};