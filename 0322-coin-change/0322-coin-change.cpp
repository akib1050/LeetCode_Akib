class Solution {
public:
   
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0 )return 0;
        int dp[amount+1];
        //memset(dp,0,sizeof(dp));
        dp[0]=0;

        for(int i=1;i<=amount;i++)
        {
            dp[i]=INT_MAX;
            for(auto x:coins)
            {
                if(x<=i && dp[i-x]!=INT_MAX)
                {
                    dp[i]=min(dp[i],1+dp[i-x]);
                }
            }
        }

        if(dp[amount]==INT_MAX)return -1;
        return dp[amount];
    }
};