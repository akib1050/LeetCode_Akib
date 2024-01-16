class Solution {
public:
    int dp[31];
    int fibo(int i)
    {
        if(i==0)return 0;
        if(i==1)return 1;
        if(dp[i]!=-1)return dp[i];
        
        dp[i]=fibo(i-1)+fibo(i-2);
        return dp[i];
    }
    int fib(int n) {
        memset(dp,-1,sizeof(dp));
        int ans=fibo(n);
        return ans;
    }
};