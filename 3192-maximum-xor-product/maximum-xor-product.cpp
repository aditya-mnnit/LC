class Solution {
public:
    int maximumXorProduct(long long a, long long b, int n) {
        int mod=1e9+7;
        for(int i=n-1;i>=0;i--)
        {
            long long x=1LL<<i;
            if(((a&x)==0)&&((b&x)==0))
            {
                a=a|x;
                b=b|x;
            }
            else if((a&x)&&(b&x))
            continue;
            else
            {
                if(a<=b)
                {
                    a|=x;
                    b=b&(~x);
                }
                else
                {
                    b|=x;
                    a=a&(~x);
                }
            }
        }
        return( (a%mod)*(b%mod) )%mod;
    }
};