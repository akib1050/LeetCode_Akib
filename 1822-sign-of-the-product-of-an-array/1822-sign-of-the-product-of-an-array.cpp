class Solution {
public:
    int arraySign(vector<int>& nums) {
        int x=nums.size();

        int c=1;
        for(int i=0;i<x;i++)
        {
            if(nums[i]==0)
            {
                c=0;
                break;
            }
            else if(nums[i]<0)
            {
                c++;
            }
        }

        if(c==0)return c;
        else
        {
            if(c%2)return 1;
            else return -1;
        }
    }
};