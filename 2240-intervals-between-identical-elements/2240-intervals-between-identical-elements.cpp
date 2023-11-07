class Solution {
public:
    vector<long long> getDistances(vector<int>& nums) {
        // unordered_map<long long ,int>mp;
        int n=nums.size();
        unordered_map<long long,long long>mp;
        unordered_map<long long,long long>countb;
        vector<long long>ans(n);
        for(int i=n-1;i>=0;i--)
        {
             long long y=countb[nums[i]];
        if(y>0)
        {
            long long x=mp[nums[i]];
           
            ans[i]+=(1LL*x-((i+2)*y));
        }
        countb[nums[i]]++;
        mp[nums[i]]+=i+2;
        }
        mp.clear();
          unordered_map<long long,int>countf;
        for(int i=0;i<n;i++)
        {
            long long y=countf[nums[i]];
            if(y>0)
            {
                long long x=mp[nums[i]];
                ans[i]+=(1LL*((i+2)*y))-x;
            }
            countf[nums[i]]++;
            mp[nums[i]]+=i+2;
        }
    return ans;
    
    }
};