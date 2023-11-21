class Solution {
public:
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int mod=1e9+7;
        for(int i=0;i<n;i++)
        {
            string s=to_string(nums[i]);
            reverse(s.begin(),s.end());
            int x=stoi(s);
            mp[nums[i]-x]++;
        }
        int c=0;
        for(auto x:mp)
        {
            long y=x.second;
            
            c+=(1LL*(y%mod*((y-1)%mod))/2)%mod;
            c%mod;
        }
        return c%mod;
    }
};