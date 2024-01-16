class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>ranS(26),maga(26);
        int n=ransomNote.size();
        int m=magazine.size();
        for(int i=0;i<26;i++)ranS[i]=0,maga[i]=0;

        for(int i=0;i<n;i++)
        {
            ranS[ransomNote[i]-'a']++;
        }

        for(int i=0;i<m;i++)
        {
            maga[magazine[i]-'a']++;
        }

        for(int i=0;i<26;i++)
        {
            if(ranS[i]>maga[i])return false;
        }
        return true;
    }
};