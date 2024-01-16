class Solution {
public:
    string s1,s2;
    int n1,n2;
    int dp[505][505];

    int solve(int i,int j)
    {
        if(i>=n1)return n2-j;
        if(j>=n2)return n1-i;

        if(dp[i][j]!=-1)return dp[i][j];

        int ret=0;
        if(s1[i]==s2[j])
        {
            ret=solve(i+1,j+1);
        }
        else
        {
            int ret1,ret2,ret3;
            ret1=1+solve(i+1,j+1);//insert
            ret2=1+solve(i+1,j);//delete
            ret3=1+solve(i,j+1);//replace

            ret=min({ret1,ret2,ret3});
        }
        return dp[i][j]=ret;
    }

    int minDistance(string word1, string word2) {
        s1=word1,s2=word2;
        n1=s1.size();
        n2=s2.size();
        memset(dp,-1,sizeof(dp));

        int ans=solve(0,0);
        return ans;
    }
};