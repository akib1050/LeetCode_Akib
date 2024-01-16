class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat[0].size();
        //if(m==k)return 1;
        int n=mat.size();
        for(int i=0;i<n;i++)
        {
            int c=0;
            vector<int>init,ans;

            for(int j=0;j<m;j++)
            {
                init.push_back(mat[i][j]);
                //init[c]=mat[i][j];
                c++;
            }
            
            c=0;
            
            k=k%m;
         
            for(int x=k;x<m;x++)
            {
                ans.push_back(mat[i][x]);
                //ans[c]=mat[i][x];
                c++;
            }
            
            
            if(k>0)
            {
                for(int x=0;x<k;x++)
                {
                  ans.push_back(mat[i][x]);
                //ans[c]=mat[i][x];
                  c++;

                }
                
            }
            
           
            if(ans!=init)return 0;
           
            
        }
        
        return 1;
    }
};