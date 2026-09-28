class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> res(m,vector<int>(n));
        int i=0;
        int k=0;
        if(original.size()!=m*n)
        {
            return {};
        }
        while(i<m)
        {
            int j=0;
            while(j<n)
            {
                res[i][j]=original[k++];
                j++;
            }
            i++;
        }
        return res;
    }
};