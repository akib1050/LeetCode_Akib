class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s;

       sort(nums.begin(),nums.end());
       for(auto i:nums)
       {
           s.insert(i);
       }
       nums.clear();
       for(auto i:s)
       {
           nums.push_back(i);
       }
       nums.push_back(1000000009);
      
       int n=nums.size()-1;
       if(n==0)return 0;

        int c=1;
        vector<int>maxi;
       for(int i=0;i<n;i++)
       {
           if(nums[i]+1==nums[i+1])
           {
               c++;
           }
           else
           {
               maxi.push_back(c);
               c=1;
           }
       }
       int m=*max_element(maxi.begin(),maxi.end());
       return m;

    }
};