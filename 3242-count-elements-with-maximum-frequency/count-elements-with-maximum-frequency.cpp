class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        mp[nums[i]]++;
        int mx=0;
        for(auto x:mp)
        mx=max(mx,x.second);
        int c=0;
        for(auto x:mp)
        {
            if(x.second==mx)
            c+=x.second;
        }
        return c;
    }
};