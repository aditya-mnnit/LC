class Solution {
public:
    int minSizeSubarray(vector<int>& nums, int target) {
        vector<int>v;
      v.insert(v.end(), nums.begin(), nums.end());
        v.insert(v.end(), nums.begin(), nums.end());
        int i=0;
        int j=0;
        long  x=0;
        for(int i=0;i<nums.size();i++)
        x+=nums[i];
        int y=target/x;
        target%=x;
    if(target==0)
    return y*nums.size();
       
        int n=v.size();
        // for(int i=0;i<n;i++)
        // cout<<v[i]<<" ";
        // return v.size();
        int mx=INT_MAX;
        long s=0;
        while(j<n)
        {
            s+=v[j];
            while(i<=j&&s>=target)
            {
                 if(s==target)
                {
                    mx=min(mx,j-i+1);
                }
                s-=v[i];
                i++;
               
            }
            j++;
        }
        if(mx==INT_MAX)
        return -1;
        return mx+y*nums.size();
        
    }
};