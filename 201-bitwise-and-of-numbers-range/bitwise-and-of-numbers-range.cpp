class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int ans=right&left;
     for(int i=0;i<32;i++)
     {
         if(ans&(1LL<<i))
         {
             if(right-left>(1LL<<i))
             ans^=(1LL<<i);
         }
     }
     return ans;
    }
};