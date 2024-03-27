class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
         ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
      int j=0;
      int n=nums.size();
      int s=1;
      int c=0;
      for(int i=0;i<n;i++)
      {
          s*=nums[i];
          if(s<k)
          {
              int x=(i-j+1);
              c+=x;
            //   c+=((x*(x+1))/2);
          }
          else
          {
              while(s>=k&&j<=i)
              {
                  s/=nums[j];
                  j++;
              }
               int x=(i-j+1);
               c+=x;
            //   c+=(x*(x+1))/2;
              
          }
        //   cout<<c<<" ";

      }  
      return c;
    }
};