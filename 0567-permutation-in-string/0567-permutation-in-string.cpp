class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        vector<int>mainS(26);
        vector<int>khujbo(26);

        for(auto i:s1)
        {
            khujbo[i-'a']++;
        }

        int n=s2.size(),m=s1.size();
        bool f=true;
        int c=0,first=0,x=0;
        for(int i=0;i<n;i++)
        {
            if(f)
            {
                first=s2[x]-'a';
                f=false;
            }
            mainS[s2[i]-'a']++;
            c++;
            if(c==m)
            {
                if(khujbo==mainS)return 1;
                c--;
                x++;
                mainS[first]--;
                f=true;
            }

        }
        return 0;
        
    }
};