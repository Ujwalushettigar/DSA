class Solution {
public:
    vector<int> countBits(int n) {
        // vector<int> res;
        // int num=n;
        // res.push_back(0);
        // for(int i=1;i<=n;i++)
        // {
        //     int cnt=0;
        //     num=i;
        //     while(num!=0)
        //     {
        //         if(num%2==1)
        //         {
        //             cnt++;
        //         }
        //         num/=2;
        //     }
        //     res.push_back(cnt);
        // }
        // return res;
        vector<int> res(n+1,0);
        for(int i=1;i<=n;i++)
        {
            res[i]=res[i & (i-1)]+1;
        }
        return res;
    }
};