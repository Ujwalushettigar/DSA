class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int a=0,b=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                a=a+5;
            }
            else if(bills[i]==10)
            {
                if(a>0)
                {
                    a=a-5;
                    b=b+10;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if(b>0 && a>0)
                {
                    b=b-10;
                    a=a-5;
                }
                else if(a>=15)
                {
                    a=a-15;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};