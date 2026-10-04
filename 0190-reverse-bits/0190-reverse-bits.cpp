class Solution {
public:
    int reverseBits(int n) {
        vector<long long> res;
        int num=n;
        for (int i = 0; i < 32; i++) 
        {   
            res.push_back(num % 2);
            num /= 2;
        }
        int l=0;
        for(int i=0;i<res.size();i++)
        {
            l=l*2+res[i];
        }
        return l;
    }
};