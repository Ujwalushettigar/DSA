class Solution {
public:
    vector<int> diStringMatch(string s) {
        int l=0;
        int r=s.length();
        int k=0;
        vector<int> res(s.length()+1);
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='I')
            {
                res[k++]=l++;
            }
            else
            {
                res[k++]=r--;
            }
        }
        res[k]=l;
        return res;
    }
};