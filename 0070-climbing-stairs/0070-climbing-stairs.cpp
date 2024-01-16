class Solution {
public:
    int dp[50];
int climb(int n)
{
    if(n<0)return 0;
    if(n==0)return 1;
    if(dp[n]!=-1)return dp[n];
    dp[n]=climb(n-1)+climb(n-2);
    return dp[n];
}

int climbStairs(int n) {
     memset(dp,-1,sizeof(dp));
     int ans=climb(n);
     return ans;
    }
};