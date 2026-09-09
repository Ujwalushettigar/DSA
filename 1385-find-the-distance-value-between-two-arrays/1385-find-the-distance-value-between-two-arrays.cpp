class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size();
        for(int i=0;i<arr1.size();i++)
        {
            bool check=true;
            for(int j=0;j<arr2.size();j++)
            {
                if(abs(arr1[i]-arr2[j])<=d)
                {
                    check=false;
                }
            }
            if(!check)
            {
                n--;
            }
        }
        return n;
    }
};