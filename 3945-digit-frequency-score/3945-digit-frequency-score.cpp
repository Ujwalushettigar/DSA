class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> hash;
        int num=n;
        while(num!=0)
        {
            int rem=num%10;
            hash[rem]++;
            num/=10;
        }
        int sum=0;
        for(auto &p:hash)
        {
            sum+=p.first*p.second;
        }
        return sum;
    }
};