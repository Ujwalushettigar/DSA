class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            sum+=mat[i][i];
            sum+=mat[n-1-i][i];
        }
        if(n%2==0)
        {
            return sum;
        }
        return sum-mat[n/2][n/2];
    }
};