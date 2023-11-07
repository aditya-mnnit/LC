class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int v) {
        int n=nums.size();
       unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int x=nums[i];
            int y=x%v;
            y=(y+v)%v;
           mp[y]++;
        }
        int ans=v;
        int i=0;
      while(true)
      {
          if(mp[i%v]==0)
          return i;
          mp[i%v]--;
          i++;

      }
        return -1;
        
    }
};