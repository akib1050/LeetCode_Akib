class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n;
        n=nums.size();
        vector<int>v1,v2;
        int left=0,right=n-1;
        
        while(left<=right)
        {
            int mid=(left+right)/2;

            if(nums[mid]==target)return mid;

            //left sorted
            if(nums[left]<=nums[mid])
            {
                if(nums[left]<=target && nums[mid]>=target)
                {
                    right=mid-1;
                }
                else left=mid+1;
            }
            else
            {
                // right sorted
                if(nums[right]>=target && nums[mid]<=target)
                {
                    left=mid+1;
                }
                else right=mid-1;

            }

        }
        return -1;


    }
};