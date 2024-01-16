class Solution {
public:
    bool isPalindrome(int x) {
       string s=to_string(x);

       string ans=s;
       reverse(s.begin(),s.end());
       if(s==ans)return 1;
       else return 0;
    }
};