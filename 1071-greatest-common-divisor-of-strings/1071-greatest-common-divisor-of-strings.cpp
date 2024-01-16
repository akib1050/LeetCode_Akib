class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        string s=str1;
        string ss=str2;
        int sz1=s.size();
		int sz2=ss.size();

		string ext="",ans="",fina="";

		vector<string>ansS;

		for(int i=0;i<sz2;i++)
        {
            ext+=ss[i];
            ans="";
            //cout<<ext<<endl;
            while(1)
            {
                ans+=ext;
                if(size(ans)>sz1)
                {
                    break;
                }
               // cout<<ans<<endl;

                if(ans==s)
                {
                    fina=ext;
                    ansS.push_back(fina);
                    break;
                }
            }
        }
        string sss="";

        if(size(fina)>0)
        {
              sort(ansS.begin(),ansS.end());
            reverse(ansS.begin(),ansS.end());
            string aa="",bb="";
            bool f=true;
            for(auto i:ansS)
            {
                aa=i;
                while(1)
                {
                    if(ss==aa)
                    {
                        return i;
                        f=false;
                        break;
                    }
                    else if(size(aa)>sz2)
                    {
                        break;
                    }
                    aa+=i;
                }
            }
            string ak="";
            if(f)return ak;
        }
       
            string ak="";
            return ak;
        
        
    }
};