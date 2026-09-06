class Solution {
public:
    int x[20];
    void nQueen(int k,int n,vector<vector<string>>& nQ)
    {
        for(int i=1;i<=n;i++)
        {
            if(place(k,i))
            {
                x[k]=i;
                if(k==n)
                {
                    vector<string> board;
                    for(int j=1;j<=n;j++)
                    {
                        string row="";
                        for(int p=1;p<=n;p++)
                        {
                            if(x[j]==p)
                            {
                                row+="Q";
                            }
                            else
                            {
                                row+=".";
                            }
                        }
                        board.push_back(row);
                    }
                    nQ.push_back(board);
                }
                else
                {
                    nQueen(k+1,n,nQ);
                }
            }
        }
    }
    bool place(int k,int i)
    {
        for(int j=1;j<k;j++)
        {
            if((x[j]==i)||(abs(x[j]-i)==abs(j-k)))
            {
                return false;
            }
        }
        return true;
    }    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> nQ;
        int x[20];
        nQueen(1,n,nQ);
        return nQ;
    }
};