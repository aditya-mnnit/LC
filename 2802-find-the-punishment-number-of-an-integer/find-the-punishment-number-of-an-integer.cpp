class Solution {
public:
int c=0;
bool f(int i,int n,int m,int tot,int su,string s)
{
    if(i==n)
    {
        tot+=su;
        if(tot==m)
        return true;
        return false;
    }
    su*=10;
    su+=s[i]-'0';

return f(i+1,n,m,tot+su,0,s)||f(i+1,n,m,tot,su,s);


}
    int punishmentNumber(int n) {
        int ans=0;
        for(int i=1;i<=n;i++)
        {
             int d=i*i;
            string str=to_string(d);
            int x=str.size();
          
            if(f(0,x,i,0,0,str))
            {
                // cout<<i<<"\n";
            ans+=(d);
            }

        }
        return ans;
    }
};