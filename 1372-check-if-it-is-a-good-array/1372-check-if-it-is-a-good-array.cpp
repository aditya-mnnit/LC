class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int n=nums.size();
        int g=0;
        for(auto x:nums)
        g=__gcd(g,x);
        if(g==1)
        return 1;
        return 0;

    }
};