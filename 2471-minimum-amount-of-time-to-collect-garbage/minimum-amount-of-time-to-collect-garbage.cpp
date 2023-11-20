class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
       int n=garbage.size();
       vector<int>v(n);
       v[0]=0;
       for(int i=0;i<n-1;i++)
       {
           v[i+1]=v[i]+travel[i];
       }
       int g=0,p=0,m=0,gi=-1,pi=-1,mi=-1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<garbage[i].size();j++)
            {
                if(garbage[i][j]=='G')
                {
                gi=i;
                g++;
                }
                else if(garbage[i][j]=='P')
                {
                pi=i;
                p++;
                }
                else if(garbage[i][j]=='M')
                {
                mi=i;
                m++;
                }
            }
        }
        int s=0;
        if(gi!=-1)
        s+=v[gi];
        if(pi!=-1)
        s+=v[pi];
        if(mi!=-1)
        s+=v[mi];
        s+=g;
        s+=p;
        s+=m;
        return s;



    }
};