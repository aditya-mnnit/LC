using ll=long long int;
class Solution {
public:
ll mod=1e9+7;
     ll binpow(ll a,ll b)
    {
        ll res=1;
        while(b>0)
        {
            if(b&1)
           res=(res*a)%mod;
            a=(a*a)%mod;
            b=b>>1;
        }
        return res%mod;
    }
    int countMatchingSubarrays(vector<int>& nums, vector<int>& p) {
        int n=nums.size();
        int k=p.size();
        string t="";
        for(int i=0;i<k;i++)
        {
            if(p[i]==-1)
                p[i]=2;
            if(p[i]==1)
                t.push_back('1');
            else if(p[i]==0)
                t.push_back('0');
            else if(p[i]==2)
                t.push_back('2');
        }
        ll x=0;
        ll mt=0;
        ll m=t.size();
        for(ll i=0;i<m;i++)
        {
             mt=((mt%mod)+binpow(31,i)*(t[i]-'0'))%mod;
        }
         string v="";
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]>nums[i])
                v.push_back('1');
            else if(nums[i+1]==nums[i])
                v.push_back('0');
            else if(nums[i+1]<nums[i])
                v.push_back('2');
        }
        vector<ll>pre(n+1,0);
         x=0;
    
        for(ll i=0;i<v.size();i++)
        {
            x=((x%mod)+binpow(31,i)*(v[i]-'0'))%mod;
            pre[i+1]=x;
        }
        ll ans=0;
        for(ll i=m;i<n;i++)
        {
            ll s=(pre[i]-pre[i-m]+mod)%mod;
            ll s1=((mt%mod)*(binpow(31,i-m)%mod))%mod;
            if(s==s1)
                ans++;
        }
       
       
        
        
        return ans;
      
    }
};