class Solution {
public:
    bool checkStrings(string s1, string s2) {
        
      
        string s=s1,ss=s2;
        vector<int>pos[26];
        vector<int>pos2[26];


        for(int i=0;i<s.size();i++)
        {
            pos[s[i]-'a'].push_back(i);
        }

         for(int i=0;i<ss.size();i++)
        {
            pos2[ss[i]-'a'].push_back(i);
        }

        //cout<<size(pos)<<endl;

        set<char>se;

        for(auto i:s)
        {
            se.insert(i);
        }

        string new1="";
         for(auto i:se)
        {
            new1+=i;
        }

        int xx=new1[0]-'a';
        //cout<<xx<<endl;

        vector< pair<int,int> >v;
        vector< pair<int,int> >vv;


        int ev=0,od=0;
        for(int i=0;i<new1.size();i++)
        {
           
            xx=new1[i]-'a';
            
           for(int j=0;j<pos[xx].size();j++)
           {
                if(pos[xx][j]%2)od++;
                else ev++;
           }

           v.push_back({ev,od});

        }


        set<char>se1;

        for(auto i:ss)
        {
            se1.insert(i);
        }

         string new2="";
         for(auto i:se1)
        {
            new2+=i;
        }



        od=0,ev=0;
        for(int i=0;i<new2.size();i++)
        {
           
            xx=new2[i]-'a';
            
           for(int j=0;j<pos2[xx].size();j++)
           {
                if(pos2[xx][j]%2)od++;
                else ev++;
           }
           vv.push_back({ev,od});

        }
        
          sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());

       if(v==vv && s1==s2)return true;
       else return false;




        
    }
};