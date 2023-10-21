class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        vector<int>v(n+1,0);
        for(int i=0;i<n-k+1;i++)
        {
            if(i!=0)
            v[i]+=v[i-1];
            int f=0;
            if(v[i]&1)
            f=1;
            if((nums[i]==0&&f==1)||(nums[i]==1&&f==0))
            {
                // nums[i]=1;
            continue;
            }
            else
            {
                // cout<<i<<" ";
                // nums[i]=1;
                c++;
                v[i]++;
                v[i+k]--;
            }
            
            
        }
        for(int i=n-k+1;i<n;i++)
        v[i]+=v[i-1];
        for(int i=0;i<n;i++)
       {
           if((v[i]&1&&nums[i]==1)||(v[i]%2==0&&nums[i]==0))
           return -1;
       }
        return c;
    }
};