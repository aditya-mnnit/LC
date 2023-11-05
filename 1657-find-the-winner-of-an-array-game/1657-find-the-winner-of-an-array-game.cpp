class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size();
      int mx=INT_MIN;
      for(int i=0;i<n;i++)
      {
          mx=max(mx,arr[i]);
      }
      int c=0;
      int m=arr[0];
    //   if(k==1)
    //   return  m;
      int ans=mx;
      for(int i=1;i<n;i++)
      {
          if(arr[i]>m)
          {
              m=arr[i];
              c=1;
          }
          else
          {
              c++;
          }
          if(c==k)
          {
              ans=m;
              break;
          }
      }
      return ans;

    }
};