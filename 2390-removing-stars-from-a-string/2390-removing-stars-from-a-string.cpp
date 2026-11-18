class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='*')
            {
                st.push(s[i]);
            }
            else
            {
                st.pop();
            }
        }
        string t="";
        while(!st.empty())
        {
            t+=st.top();
            st.pop();
        }
        reverse(t.begin(),t.end());
        return t;
    }
};