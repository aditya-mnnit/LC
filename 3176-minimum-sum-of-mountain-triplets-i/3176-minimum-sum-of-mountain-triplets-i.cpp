class Solution {
public:
    int minimumSum(vector<int>& nums) {
       int n=nums.size();
        vector<int>l(n,-1);
        vector<int>r(n,-1);
        int mi=nums[0];
        
        for(int i=1;i<n;i++)
        {
            l[i]=mi;
            mi=min(mi,nums[i]);
        }
        mi=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            r[i]=mi;
            mi=min(mi,nums[i]);
        }
        int ans=1e9;
        for(int i=0;i<n;i++)
        {
            // cout<<l[i]<<" "<<r[i]<<"\n";
            if(l[i]!=-1&&r[i]!=-1)
            {
                if(l[i]<nums[i]&&nums[i]>r[i])
                {
                    ans=min(ans,nums[i]+l[i]+r[i]);
                }
            }
        }
        if(ans==1e9)
            return -1;
        return ans;   
    }
};