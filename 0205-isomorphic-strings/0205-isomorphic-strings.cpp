class Solution {
public:
    map<char,bool>m2;

    bool isIsomorphic(string s, string t) {
        int n=s.size(),m=t.size();
        vector<int>ss(126),tt(26);
        for(int i=0;i<126;i++)ss[i]=0;

        map<char,char>m1;

        bool f=true;

        for(int i=0;i<n;i++)
        {
            if(m1.count(s[i]))
            {
                if(m1[s[i]]!=t[i])
                {
                    f=false;
                    break;
                }
            }
            else {

                if(m2[t[i]]==true)
                {
                    f=false;
                    break;
                }
                m1[s[i]]=t[i];
                m2[t[i]]=true;
            }
            
        }

       if(f)return 1;
       else return 0;


    }
};