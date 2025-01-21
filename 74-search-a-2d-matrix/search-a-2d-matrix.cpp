class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int target) {
        int r=0;
        int c=m[0].size()-1;
     while(r<m.size()&&c<m[0].size())
     {
         if(m[r][c]==target)
         return true;
         if(target>m[r][c])
         {
             r++;
         }
         else
         c--;
     }
     return false;
        
    }
};