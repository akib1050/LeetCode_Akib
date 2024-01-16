class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& ss) {
        vector<string>s;
        for(auto i:ss)
        {
            string sss=i;
            sort(sss.begin(),sss.end());
            s.push_back(sss);
        }
            
        int n=s.size();

        set<string>se;

        for(auto i:s)
        {
            se.insert(i);

        }
        int sz=se.size();

        int c=s.size(),d=0;;
        vector<vector<string>>v(sz);
        vector<vector<int>>vIndx(sz);

        for(auto i:se)
        {
            for(int j=0;j<c;j++)
            {
                if(s[j]==i)
                  vIndx[d].push_back(j);
            }
            d++;
        }
        d=0;

        for(int i=0;i<sz;i++)
        {
            for(int j=0;j<vIndx[i].size();j++)
            {
                v[i].push_back(ss[vIndx[i][j]]);
            }
        } 
        return v;
    }
};