class Solution {
public:
    long long hr(vector<int>& arr,int h)
    {
        long long tt=0;
        for(int i=0;i<arr.size();i++)
        {
            tt+=ceil((double)arr[i]/(double)h);
        }
        return tt;
    }
    int minEatingSpeed(vector<int>& piles, int hi) {
        int h=*max_element(piles.begin(),piles.end());
        int l=1;
        while(l<=h)
        {
            int m=l+(h-l)/2;
            long long tt=hr(piles,m);
            if(tt<=hi)
            {
                h=m-1;
            }
            else
            {
                l=m+1;
            }
        }
        return l;
    }
};