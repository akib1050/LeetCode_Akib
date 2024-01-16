class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>vs;

        int n=nums.size();
        int xx=3000000009;
        nums.push_back(xx);
        int c=0;
        


        for(int i=0;i<n;i++)
        {
            int indx=i,val=nums[indx];
            bool f=false;
            c=nums[indx];
            for(;indx<n;indx++)
            {    
        
                string ss="",p,q,r,w="->";
                if(indx<n-1 && nums[indx]+1==nums[indx+1])
                {
                    f=true;
                    c++;
                }
                else
                {
                    if(f)break;
                    ss="";
                    p=to_string(val);
                    ss+=p;
                    vs.push_back(ss);
                    f=false;
                    break;
                }
                
               
            }
            if(f)
            {
                string ss="",p,q,r,w="->";
                p=to_string(val);
                q=to_string(c);
                ss+=p;
                ss+=w;
                ss+=q;
                vs.push_back(ss);
            }
            i=indx;
        }
        return vs;
    }
};