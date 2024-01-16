class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size(),m=p.size();
        vector<int>trackS(26),trackP(26);

        for(int i=0;i<26;i++)
        {
            trackS[i]=0;
            trackP[i]=0;
        }

        for(auto i:p)
        {
            trackP[i-'a']++;
        }

        int c=0,first=0,indx=0;
        vector<int>ans;
        bool f=false;
        int cc=0,track=0;
        
        for(int i=0;i<n;i++)
        {
            trackS[s[i]-'a']++;
            cc++;
            if(trackP==trackS)
            {
                ans.push_back(track);
            }
            if(cc==m)
            {
               trackS[s[track]-'a']--; 
               track++;
               cc--;
            }
           
        }
        return ans;
    }
};