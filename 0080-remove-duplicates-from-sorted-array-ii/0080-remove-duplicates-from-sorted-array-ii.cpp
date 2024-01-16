class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }

        int j=0;
        vector<int>v;

        for(auto i:m)
        {
            if(i.second>=2)
            {
                nums[j]=i.first;
                j++;
                nums[j]=i.first;
                j++;
            }
            else
            {
                nums[j]=i.first;
                j++;
            }
        }
       
        return j;
    }
};