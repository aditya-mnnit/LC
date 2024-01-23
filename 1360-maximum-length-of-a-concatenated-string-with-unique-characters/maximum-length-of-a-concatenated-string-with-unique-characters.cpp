class Solution {
public:

int f(int i,int n,int msk,vector<string>&v,vector<int>&m)
{
    if(i==n)
    {
        return 0;
    }
    int tk=0,nk=0;
    int b1=msk^m[i];
    int b2=b1&m[i];
    if(b2==m[i])
    tk=v[i].size()+f(i+1,n,msk|m[i],v,m);
    nk=0+f(i+1,n,msk,v,m);
    return max(tk,nk);
    
}
    int maxLength(vector<string>& arr) {
        int n=arr.size();
        vector<int>m;
        vector<string>str;
        for(int i=0;i<n;i++)
        {
            int mk=0;
            int f=0;
            for(int j=0;j<arr[i].size();j++)
            {
            int x=1<<(arr[i][j]-'a');
            if((mk&x)==x)
            {
                f=1;
                break;
            }
            else
            {
                mk|=x;
            }
            }
            if(f==0)
            {
                str.push_back(arr[i]);
                m.push_back(mk);
            }
        }
        int k=str.size();
        int ans=f(0,k,0,str,m);
        return ans;
    }
};