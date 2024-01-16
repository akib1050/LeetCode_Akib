class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int ma=INT_MIN;
        map<int,int>m;

        for(auto i:nums)
             m[i]++;
        int ans=0;
        for(auto i:m)
        {
            if(ma<i.second)
               ans=i.first,ma=i.second;
        }

        return ans;
    }
};