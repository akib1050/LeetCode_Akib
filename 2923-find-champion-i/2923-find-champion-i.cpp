class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)c++;
            }
            v.push_back(c);
        }
        
        int ans=-1;
        int c=0;
        for(int i=0;i<v.size();i++)
        {
            if(ans<v[i])
            {
                ans=v[i];
                c=i;
            }
        }
        return c;
    }
};