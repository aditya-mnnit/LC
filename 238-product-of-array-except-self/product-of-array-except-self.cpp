class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>l(n);
        vector<int>r(n);
        int s=1;
        for(int i=0;i<n;i++)
        {
            l[i]=s;
            s*=nums[i];
        }
        s=1;
        for(int i=n-1;i>=0;i--)
        {
            r[i]=s;
            s*=nums[i];
        }
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        ans[i]=l[i]*r[i];
        return ans;
      
    }
};