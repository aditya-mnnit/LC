using ll=long long int;
class Solution {
public:
    long long maximumHappinessSum(vector<int>& nums, int k) {
        ll c=0;
        ll n=nums.size();
        sort(nums.rbegin(),nums.rend());
        ll s=0;
        for(int i=0;i<k;i++)
        {
            ll x=nums[i]-c;
            if(x>0)
            {
                s+=x;
            }
            else
            {
                break;
            }
            c++;
            
        }
        return s;
        
        
    }
};