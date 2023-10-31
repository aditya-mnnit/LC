class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int x=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        x^=nums[i];
        int y=1LL<<(ffs(x)-1);
        int z=0;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(y&nums[i])
            {
                z^=nums[i];
            }
        }
        ans.push_back(z);
        ans.push_back(z^x);
        return ans;
    }
};