class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        
        string s11="",s12="",s13="";
        
        if(s1==s2)return true;
        
        s11+=s1[2];
        s11+=s1[1];
        s11+=s1[0];
        s11+=s1[3];
        
        if(s11==s2)return true;
        
        s11="";
        s11+=s1[2];
        s11+=s1[3];
        s11+=s1[0];
        s11+=s1[1];
        
        
        if(s11==s2)return true;
        
        s11="";
        s11+=s1[0];
        s11+=s1[3];
        s11+=s1[2];
        s11+=s1[1];
        
        
        if(s11==s2)return true;
        return false;
        
        
        
        
        
    }
};