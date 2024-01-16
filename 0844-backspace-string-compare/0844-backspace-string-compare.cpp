class Solution {
public:
    bool backspaceCompare(string s, string t) {

        string ans="",ans1="";


    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());

    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='#')
        {
            c++;
        }
        else
        {
            if(c==0)
            {
                ans+=s[i];
            }
            else
            {
                c--;
            }
        }
    }


    c=0;
    for(int i=0;i<t.size();i++)
    {
        if(t[i]=='#')
        {
            c++;
        }
        else
        {
            if(c==0)
            {
                ans1+=t[i];
            }
            else
            {
                c--;
            }
        }
    }


    if(ans==ans1)return 1;
    else return false;


        
    }
};