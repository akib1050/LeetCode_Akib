class Solution {
public:
    int romanToInt(string s) {
        string ss="IVXLCDM";
        //vector<char>ss={'I','V','X','L','C','D','M'};
        vector<int>v={1,5,10,50,100,500,1000};
    
        int j=0;
        map<char,int>m;
        for(auto i:ss)
        {
            m[i]=v[j];
            j++;
        }
        int n=s.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(i<n-1 && s[i]=='I' && s[i+1]=='X')sum+=9,i++;
            else if(i<n-1 && s[i]=='I' && s[i+1]=='V')sum+=4,i++;
            else if(i<n-1 && s[i]=='X' && s[i+1]=='L')sum+=40,i++;
            else if(i<n-1 && s[i]=='X' && s[i+1]=='C')sum+=90,i++;
            else if(i<n-1 && s[i]=='C' && s[i+1]=='D')sum+=400,i++;
            else if(i<n-1 && s[i]=='C' && s[i+1]=='M')sum+=900,i++;
            else
            {
                for(auto k:m)
                {
                    if(k.first==s[i])
                    {
                        sum+=k.second;
                        break;
                    }
                }
            }

        }
        return sum;
    }
};