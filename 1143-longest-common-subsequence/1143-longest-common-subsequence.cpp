class Solution {
public:

    string s1,s2;
    int n1, n2;
    int dp[1004][1004];
    int solve(int i,int j)
    {
        if(i>=n1  || j>=n2)return 0;
        if(dp[i][j]!=-1)return dp[i][j];

        int ans=0;

        if(s1[i]==s2[j])
        {
            ans=1+solve(i+1,j+1);
        }
        else
        {
            ans=max(solve(i+1,j),solve(i,j+1));
        }

        return dp[i][j]=ans;
    }

    int longestCommonSubsequence(string text1, string text2) {
        n1=text1.size(),n2=text2.size();
        memset(dp,-1,sizeof(dp));
        s1=text1,s2=text2;

        return solve(0,0);

    }
};