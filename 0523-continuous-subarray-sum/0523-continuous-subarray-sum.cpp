class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
         int i=0;
        int j=0;
      
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]=1;
        int s=0;
       for(int i=0;i<n;i++)
       {
          s+=(nums[i]);
          s%=k;
         
          if(mp[s]>0)
          {
              int d=i+2-mp[s];
              if(d>1)
              {
                  return true;
              }

          }
          else
          mp[s]=i+2;
       }
       
       
        return false;;
        // return true;;
         
    }
};