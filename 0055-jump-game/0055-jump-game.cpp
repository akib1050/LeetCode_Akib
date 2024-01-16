class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return true;
        if(nums[0]==0)return false;

        int ans=nums[0];
        for(int i=1;i<n-1;i++)
        {
            ans--;
            if(ans==0 && nums[i]==0)return false;
            
            if(ans<nums[i])
            {
                ans=nums[i];
            }
            
        }
        if(ans>0)return true;
        return false;
    }
};