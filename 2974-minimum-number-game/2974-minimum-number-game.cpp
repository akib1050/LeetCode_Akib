class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>v(n);
        
        for(int i=0;i<n-1;i+=2)
        {
            v[i]=nums[i+1];
            v[i+1]=nums[i];
        }
        
       
        return v;
    }
};