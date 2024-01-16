class Solution {
public:
    int removePalindromeSub(string s) {
      int n=s.size();


        int j=n-1,ans=0;
        bool f=false;

        for(int i=0; i<n; i++)
        {
            if(i>=j)break;

            if (s[i] != s[j])
            {
                f=true;
                ans=2;
                break;
            }
            j--;


        }

        if(!f)ans=1;
        return ans;

    }
};