class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        vector<int>v(255,0);
       
      
        int ans=0,indx=0,ans2=0;
        for(int i=0;i<n;i++)
        {
            
            if(v[int(s[i])]==0)
            {
                ans++;
                v[int(s[i])]++;
                ans2=max(ans,ans2);
            }
            else
            {
                ans2=max(ans,ans2);
                ans--;
                v[int(s[indx])]--;
                i--;
                indx++;
            }
        }
        return ans2;
    }
};