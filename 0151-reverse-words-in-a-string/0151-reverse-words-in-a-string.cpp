class Solution {
public:
    string reverseWords(string s) {
        vector<string>vs;

        int spaceCou=0,n=s.size();
        string ss="";
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            {
                if(ss.size()>0)
                {
                    vs.push_back(ss);
                    ss="";
                }
            }
            else ss+=s[i];
        }
      
        vs.push_back(ss);
        reverse(vs.begin(),vs.end());

        string ans="";
        bool f=false;
        for(int i=0;i<vs.size();i++)
        {
            for(int j=0;j<vs[i].size();j++)
            {
                ans+=vs[i][j];
                f=true;
            }
            if(f && i+1!=vs.size())ans+=' ',f=false;
        }
        //int sz=ans.size();
        //ans.erase(sz-1,sz-1);
        return ans;
       
    }
};