class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int n=nums.size(),c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==val)
            {
                c++;
                nums[i]=10000;
            }
        }
        sort(nums.begin(),nums.end());
        int ans=n-c;

      
        return ans;
    }
};