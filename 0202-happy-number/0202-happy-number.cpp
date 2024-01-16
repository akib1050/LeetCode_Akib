class Solution {
public:

    
    bool isHappy(int n) {
        
        long long div,mod,ans=0,c=0;
        while(n!=0)
        {
            mod=n%10;
            n/=10;
            ans=ans+pow(mod,2);
            if(n==0)
            {
                if(ans==1)return true;
                else n=ans;
                ans=0;
            }
            c++;
            if(c>1000)break;
        }
        return false;
    }
};