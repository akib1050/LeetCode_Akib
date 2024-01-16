class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        
        int m=edges.size();
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            ans[i]=0;
        }
        for(int i=0;i<m;i++)
        {
            ans[edges[i][1]]++;
            
        }
        
        int anss=0,c=0;;
        
        for(int i=0;i<n;i++)
        {
            if(ans[i]==0)
            {
                c++;
                anss=i;
            }
        }
        
        if(c>1)return -1;
        else return anss;
        
        
        
    }
};