class Solution {
public:
    bool fun(int c,vector<int>& w,int days)
    {
        int day=1;
        int sum=0;
        for(int i:w)
        {
            if(sum+i<=c)
            {
                sum+=i;
            }
            else if(sum+i>c)
            {
                day+=1;
                sum=i;
            }
        }
        return day<=days;
    } 
    int shipWithinDays(vector<int>& weights, int days) {
        int l=*max_element(weights.begin(),weights.end());
        int r=accumulate(weights.begin(),weights.end(),0);
        int m=0;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(fun(mid,weights,days))
            {
                r=mid-1;
                m=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return m;
    }
};