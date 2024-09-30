class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n=nums.size();
        int mn=nums[0];
        int ans=0;
        for(int i=0;i<n;i++){
            mn=min(mn,nums[i]);
            if(nums[i]>mn){
               ans=max(ans,nums[i]-mn); 
            }
        }
        return ans; 
    }
};