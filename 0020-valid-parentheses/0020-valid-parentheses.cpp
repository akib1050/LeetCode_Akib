class Solution {
public:
    bool isValid(string s) {
        int n=s.size();

        int c1=0,c2=0,c3=0;

        stack<char>st;

        for(auto i:s)
        {
            if(i=='}' || i==']' || i==')')
            {
                if(st.empty())return 0;

                
                if(i=='}' &&  st.top()=='{')st.pop();
                else if(i==')' &&  st.top()=='(')st.pop();
                else if(i==']' &&  st.top()=='[')st.pop();
                else return 0;

            }
            else
            {
                st.push(i);
            }
        }

        if(!st.empty())return 0;

        
        return 1;
    }
};