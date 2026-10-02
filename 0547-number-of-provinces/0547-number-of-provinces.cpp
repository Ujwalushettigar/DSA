class Solution {
public:
    void dfs(int i,vector<vector<int>>& res,vector<int>& visit)
    {
        visit[i]=1;
        for(int j:res[i])
        {
            if(visit[j]==0)
            {
                dfs(j,res,visit);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<vector<int>> res(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(isConnected[i][j]==1 && i!=j)
                {
                    res[i].push_back(j);
                }
            }
        }
        vector<int> visit(n,0);
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(visit[i]==0)
            {
                cnt++;
                dfs(i,res,visit);
            }
        }
        return cnt;
    }
};