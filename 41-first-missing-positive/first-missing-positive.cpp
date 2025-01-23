class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
    int n =nums.size();
    for(int i=0;i<n;i++)
    {
        int ele=nums[i];
        if(ele>=1&&ele<=n)
        {
            while(ele>=1&&ele<=n&&ele!=i+1&&ele!=nums[ele-1])
            {
                swap(nums[ele-1],nums[i]);
                ele=nums[i];
            }
        }
    }
    int ans=n+1;
    for(int i=0;i<n;i++)
    {
        if(nums[i]!=i+1)
        {
            ans=i+1;
            break;
        }
    }
    return ans;
    }
};