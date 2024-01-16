class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       int n=numbers.size();
         vector<int>v;

    for(int i=0;i<n;i++)
    {
         int find;
        find=abs(numbers[i]-target);
        if(target<0 && numbers[i]<0)
        {
        	find=target-numbers[i];  	
        }
      
        if(binary_search(numbers.begin(),numbers.end(),find))
        {
            int i2=lower_bound(numbers.begin(),numbers.end(),find)-numbers.begin();

            if(i==i2)
            {

            }
            else
            {
            v.push_back(min(i+1,i2+1));
            v.push_back(max(i+1,i2+1));
            break;
            }
        }

    }
    return v;
    }
    
};