1. int minPathSum(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        int dp[201][201];
        dp[0][0]=grid[0][0];
        
        for(int i=1;i<r;i++)
            dp[i][0]=grid[i][0]+dp[i-1][0];
        
        for(int i=1;i<c;i++)
            dp[0][i]=grid[0][i]+dp[0][i-1];
        
        for(int i=1;i<r;i++)
            for(int j=1;j<c;j++)
                dp[i][j]= grid[i][j] + min(dp[i-1][j],dp[i][j-1]);
        return dp[r-1][c-1];
    }

2. vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int r=matrix.size();
        int c=matrix[0].size();

        int top=0, left=0, down=r-1, right=c-1;
        int d=0;
        while(left<=right && top<=down){
            if(d==0){
                for(int i=left; i<=right; i++)
                    ans.push_back(matrix[top][i]);
                top++;
            }
            else if(d==1){
                for(int i=top; i<=down; i++)
                    ans.push_back(matrix[i][right]);
               right--;
            }
            else if(d==2){
                for(int i=right; i>=left; i--)
                    ans.push_back(matrix[down][i]);
               down--;
            }
            else if(d==3){
                for(int i=down; i>=top; i--)
                    ans.push_back(matrix[i][left]);
               left++;
            }
            d=(d+1)%4;      
        }
        
        return ans;
    }

3.  vector<vector<int>> generateMatrix(int n) {
      vector<vector<int>>ans(n,vector<int>(n));
        int l=1;

        int top=0, left=0, down=n-1, right=n-1;
        int d=0;
        while(left<=right && top<=down){
            if(d==0){
                for(int i=left; i<=right; i++)
                    ans[top][i]=l++;
                top++;
            }
            else if(d==1){
                for(int i=top; i<=down; i++)
                    ans[i][right]=l++;
               right--;
            }
            else if(d==2){
                for(int i=right; i>=left; i--)
                    ans[down][i]=l++;
               down--;
            }
            else if(d==3){
                for(int i=down; i>=top; i--)
                    ans[i][left]=l++;
               left++;
            }
            d=(d+1)%4;      
        }
        
        return ans;   
    }

4. void rotation(vector<vector<int>>& mat)
    {
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                int temp=mat[j][i];
                mat[j][i]=mat[i][j];
                mat[i][j]=temp;
            }
        }
        
       for(int i=0;i<mat.size();i++)
            reverse(mat[i].begin(), mat[i].end());
        
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat== target)  return true;
        
        rotation(mat);
        if(mat==target)   return true;
        
        rotation(mat);
        if(mat==target)   return true;
        
        rotation(mat);
        if(mat==target)   return true;
        
        return false;
    }

5.  vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int R = matrix.size(), C = matrix[0].size();
        vector<vector<int>> ans(C,vector<int>(R));
        for (int r = 0; r < R; ++r)
            for (int c = 0; c < C; ++c) {
                ans[c][r] = matrix[r][c];
            }
        return ans;
            
        }

6.  int diagonalSum(vector<vector<int>>& mat) {
       int ans=0;
        int n=mat.size();
       for(int i=0;i<n;i++){
            ans+=(mat[i][i]+mat[i][mat.size()-1-i]);
        }
        if((n&1)==0)
            return ans;
        return ans-mat[n/2][n/2];
    }

7.  int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i=0;
        int j=m-1;
        int c=0;
        while(i<n and j>=0){
            if(grid[i][j]<0){
                c+=(n-i);
                j--;
            }
            else
                i++;
        }
        return c;
    } int countNegatives(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int i=0;
        int j=m-1;
        int c=0;
        while(i<n and j>=0){
            if(grid[i][j]<0){
                c+=(n-i);
                j--;
            }
            else
                i++;
        }
        return c;
    }

8.  int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> ans;
        int t=0;
        for(int i=0;i<accounts.size();i++){
            t=0;
            for(int j=0;j<accounts[i].size();j++)
                t+=accounts[i][j];
        ans.push_back(t);
    }
        return *max_element(ans.begin(),ans.end());
    } int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> ans;
        int t=0;
        for(int i=0;i<accounts.size();i++){
            t=0;
            for(int j=0;j<accounts[i].size();j++)
                t+=accounts[i][j];
        ans.push_back(t);
    }
        return *max_element(ans.begin(),ans.end());
    }

9.  vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto& v : image ){
            for_each(v.begin(),v.end(),[](int& n){ n = !n; });
            reverse(v.begin(),v.end());
        }
        return image;
    }

10. 
