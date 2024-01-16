class Solution {
public:
    int maxProfit(vector<int>& prices) {

        vector<int>v,ans;
        v=prices;
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

        if(v==prices)return 0;

        int diff=0,j=0,min=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(min>prices[i])
            {
                min=prices[i];
            }
            if(diff<(prices[i]-min) )
            {
                diff=(prices[i]-min);
            }
        }
        return diff;
        
    }
};