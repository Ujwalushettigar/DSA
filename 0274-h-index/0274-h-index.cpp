class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(),c.end(),greater<int>());
        int h=0;
        while(h<c.size() && c[h]>=h+1)
        {
            h++;
        }
        return h;
    }
};