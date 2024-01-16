class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    
       
         vector<int>ans,v1,v2,v;
         v=nums;
         v1=v;
         int n=nums.size();

        reverse(v.begin(),v.end());

        if(k>n)
            k=(k%n);

        for(int i=0;i<k;i++)
            ans.push_back(v[i]);


        reverse(ans.begin(),ans.end());

        if(k==0)
        {
            for(int i=0;i<n;i++)
            {
                v2.push_back(v1[i]);
                nums[i]=v1[i];
            }

            return;
        }
        int kk=0;
        for(int i=0;i<size(ans);i++)
            nums[kk]=ans[i],kk++;

        if(k>0)
        {
           for(int i=0;i<n-k;i++)
              nums[kk]=v1[i],kk++;
        }
    
    }

};