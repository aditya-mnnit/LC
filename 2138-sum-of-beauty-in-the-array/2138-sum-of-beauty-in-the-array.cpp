class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int  n=nums.size();
        vector<int>a(n);
        vector<int>b(n);
        int mi=nums[0];
        for(int i=1;i<n;i++)
        {
            a[i]=mi;
            mi=max(mi,nums[i]);
        }
        mi=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            b[i]=mi;
            mi=min(mi,nums[i]);
        }
        // vector<int>ans(n,0);
        int s=0;
        for(int i=1;i<n-1;i++)
        {
            if(a[i]<nums[i]&&nums[i]<b[i]&&b[i]>a[i])
            s+=2;
            else if(nums[i]>nums[i-1]&&nums[i]<nums[i+1]&&nums[i+1]>nums[i-1])
            s+=1;
            else
            s+=0;
        }
        return s;
    }
};