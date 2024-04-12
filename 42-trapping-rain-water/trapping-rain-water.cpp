class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
       int i=0;
       int j=n-1;
       int lm=nums[0];
       int rm=nums[n-1];
       int ans=0;
       while(i<j)
       {
           if(lm<=rm)
           {
               if(nums[i]<=lm)
               ans+=(lm-nums[i]);i++;
           }
           else
           {
                if(nums[j]<=rm)
               ans+=(rm-nums[j]);
               j--;

           }
           lm=max(lm,nums[i]);
           rm=max(rm,nums[j]);
       }
       return ans;
    }
};