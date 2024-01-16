class Solution {
public:
    int strStr(string s, string ss) {
        int c=0,indx=-1,ans=0;
        bool f=false;
        int n=s.size(),m=ss.size();
        for(int i=0;i<n;i++)
        {
            f=true;
            int cc=0;
            indx=i;
            ans=i;
            for(int j=0;j<m;j++)
            {
                if(s[indx]!=ss[j])
                {
                    f=false;
                    break;
                }
                indx++;
                cc++;
            }
            if(cc==m)
            {
                f=true;
                break;
            }
        }

        if(!f)return -1;
        return ans;
    }
};