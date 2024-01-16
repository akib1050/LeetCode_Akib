class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int l1=s1.size();
        int l2=s2.size();
        int l3=s3.size();
        
        int c=0;
        for(int i=0;i<100;i++)
        {
            if(i==s1.size() || i==s2.size() ||  i==s3.size())
            {
                break;
            }
            if(s1[i]==s2[i] && s2[i]==s3[i])c++;
            else break;
        }
        
        if(c==0)return -1;
        return ((l1-c)+(l2-c)+(l3-c));
    }
};