class Solution {
public:

    bool wordPattern(string pattern, string s) {
        map<char,string>m1;
        map<string,bool>m2;


        vector<string>v;
        string ss="";
        for(int i:s)
        {
            if(i==' ')
            {
                v.push_back(ss);
                ss="";
            }
            else ss+=i;
        }
        v.push_back(ss);

        int n=pattern.size(),m=v.size();
        if(n!=m)return false;

        for(int i=0;i<n;i++)
        {
            if(m1.count(pattern[i]))
            {
                if(m1[pattern[i]]!=v[i])
                {
                    return false;
                }
            }
            else
            {
                if(m2[v[i]]==true)return false;
                m1[pattern[i]]=v[i];
                m2[v[i]]=true;
            }
        }
        return true;

    }
};