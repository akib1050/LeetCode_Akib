class Solution {
public:
    string st1,st2;
    int n1,n2;
    int dp[1011][1011];
    
    int LCS_string(int i,int j)
    {
        if(i>=n1 || j>=n2)return 0;
        if(dp[i][j]!=-1)return dp[i][j];

        int ans;
        if(st1[i]==st2[j])
        {
            ans=int(st1[i])+LCS_string(i+1,j+1);
        }
        else
        {
            int ret1=LCS_string(i+1,j);
            int ret2=LCS_string(i,j+1);

            ans=max(ret1,ret2);
        }
        return dp[i][j]=ans;
    }
    
    int minimumDeleteSum(string s1, string s2) {
            st1=s1;
            st2=s2;
            n1=s1.size();
            n2=s2.size();

            for(int i=0;i<1011;i++)
            {
                for(int j=0;j<1011;j++)
                {
                    dp[i][j]=-1;
                }
            }
            int SubsequenceAsci=LCS_string(0,0);
            int totalAscii=0;
            for(auto i:s1)totalAscii+=(int)i;
            for(auto i:s2)totalAscii+=(int)i;

            int difference=totalAscii-(SubsequenceAsci*2);
            return difference;
    }
};