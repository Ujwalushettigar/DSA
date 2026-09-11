class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        vector<int> hash(256,0);
        int i=0;
        int m=0;
        for(int r=0;r<n;r++)
        {
            if(hash[s[r]]>i)
            {
                i=hash[s[r]];
            }
            hash[s[r]]=r+1;
            int cnt=r-i+1;
            m=max(cnt,m);
        }
        return m;
    }
};