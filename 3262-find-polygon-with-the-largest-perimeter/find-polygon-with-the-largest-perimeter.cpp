
using ll=long long int;
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
    ll n=nums.size();
    sort(nums.begin(),nums.end());
    ll mx=-1;
    ll s=0;
    for(int i=0;i<n;i++)
    {
        if(s>nums[i])
        {
            mx=max(mx,s+nums[i]);
        }
        s+=nums[i];
    }
    return mx;
    }
};