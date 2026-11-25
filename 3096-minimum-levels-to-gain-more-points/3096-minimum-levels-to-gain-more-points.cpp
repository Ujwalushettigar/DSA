class Solution {
public:
    int minimumLevels(vector<int>& possible) {
        int n=possible.size();
        int sum=0;
        for(int i:possible)
        {
            if(i==1)
            {
                sum+=1;
            }
            else
            {
                sum-=1;
            }
        }
        int a=0;
        for(int i=0;i<n-1;i++)
        {
            if(possible[i]==1)
            {
                a+=1;
            }
            else
            {
                a-=1;
            }
            if(a>sum-a)
            {
                return i+1;
            }
        }
        return -1;
    }
};