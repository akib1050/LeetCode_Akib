class Solution {
public:
    int lengthOfLastWord(string s) {
        string first="",last="";
        int c=0,n=s.size();

        bool f=false;
        for(int i=n-1;i>=0;i--)
        {
            if(s[i]==' ')
            {
                if(f)break;
            }
            else first+=s[i],c++,f=true;

        }
        return c;
    }
};