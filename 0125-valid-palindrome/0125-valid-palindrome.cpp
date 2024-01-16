class Solution {
public:
    bool isPalindrome(string s) {
        string ss="",s1="";
        int n=s.size();

        int c=0;
        for(int i=0;i<n;i++)
        {
            if( (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9') )
            {
                char a=s[i];
                a=tolower(s[i]);
                ss+=a;
                s1+=a;
                c++;
            }
        }


        reverse(s1.begin(),s1.end());


        if(s1==ss)return true;
        return false;


    }
};