class StockSpanner {
public:
    vector<int> res;
    StockSpanner() {
        
    }
    
    int next(int price) {
        res.push_back(price);
        int cnt=1;
        for(int i=res.size()-2;i>=0;i--)
        {
            if(price>=res[i])
            {
                cnt++;
            }
            else
                break;
        }
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */