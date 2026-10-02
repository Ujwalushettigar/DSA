class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        if(s.length()>t.length())
        {
            return false;
        }
        if(s.length()==0)
        {
            return true;
        }
        while(i<s.length() && j<t.length())
        {
            if(s[i]==t[j])
            {
                i++;
            }
            j++;
        }
        return s.length()==i;
    }
};