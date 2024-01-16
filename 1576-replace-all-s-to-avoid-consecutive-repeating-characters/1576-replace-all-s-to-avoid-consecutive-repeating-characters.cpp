class Solution {
public:
    string modifyString(string s) {
        int n=s.size();
        string ss="abcdefghijklmnopqrstuvwxyz";

      

        for(int i=0;i<n;i++)
        {
            if(s[i]=='?')
            {
                if(n==1)
                {
                    s[i]='a';
                }
                else if(i==n-1)
                {
                    if(s[i-1]=='a')s[i]='b';
                    else s[i]='a';
                }
                else if(i==0)
                {
                    if(s[i+1]=='a')s[i]='b';
                    else s[i]='a';
                }
                else
                {
                    int a=int(s[i-1]);
                    int b=int(s[i+1]);


                    if(a==122)
                    {
                        if(b==121)s[i]=(char)120;
                        else s[i]=(char)121;
                    }
                    else if(b==122)
                    {
                        if(a==121)s[i]=(char)120;
                        else s[i]=(char)121;
                    }
                    else if(a==97)
                    {
                        if(b==121)s[i]=(char)120;
                        else s[i]=(char)121;
                    }
                    else if(b==97)
                    {
                        if(a==121)s[i]=(char)120;
                        else s[i]=(char)121;
                    }
                    else
                    {
                        s[i]=97;
                    }


                }
            }
        }
        return s;
    }
};