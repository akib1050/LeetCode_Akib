class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9)
        {
            digits[n-1]++;
            return digits;
        }

        int m=n-1;
        while(m>=0)
        {
            if(digits[m]==9)
            {
              digits[m]=0;
              m--;  
            }
            else break;
            if(m<0)break;
        }
        vector<int>v;
        if(m<0)
        {
            v.push_back(1);
            for(auto i:digits)
            {
                v.push_back(0);
            }
            return v;
        }
        digits[m]++;
        return digits;
    }
};