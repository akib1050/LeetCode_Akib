class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            int srch=nums[i],indx=i;
            if(m.count(srch))
            {
               
                int dif=abs(indx-m[srch]);
                if(dif<=k && dif!=0)return true;
                
            }
            m[nums[i]]=i;
            
        }

        return false;
    }
};