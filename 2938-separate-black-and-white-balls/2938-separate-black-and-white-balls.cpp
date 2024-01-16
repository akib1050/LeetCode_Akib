class Solution {
public:
    long long minimumSteps(string s) {
        long long l=s.size(),sum=0,c=0;
        bool f=false;
        for(int i=0;i<l;i++)
        {
            if(s[i]=='0'&& !f)
            {
                f=false;
            }
            else if(s[i]=='0' && f)
            {
                f=true;
                sum+=c;
            }
            
            if(s[i]=='1')
            {
                f=true;
                c++;
            }
        }
        return sum;
    }
};