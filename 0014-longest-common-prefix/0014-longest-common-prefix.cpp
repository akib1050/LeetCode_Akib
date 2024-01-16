class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";

        ans=strs[0];
        for(auto i:strs)
        {
            for(int j=0;j<ans.size();j++)
            {
                if(ans[j]==i[j])
                {

                }
                else
                {
                    if(ans.size()==0)return "";
                    else 
                    {
                        int sz=ans.size();
                        ans.erase(j,sz);
                    }
                }
            }
        }
        return ans;
    }
};