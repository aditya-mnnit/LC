class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& ne) {
        //   vector<pair<int,int>>v;
        int n=in.size();
        vector<vector<int>>v;
        // for(int i=0;i<n;i++)
        // {
        //     v.push_back(make_pair(in[i][0],in[i][1]));
        // }
        vector<int>a;
        int st=ne[0];
        int l=ne[1];
        int f=0;
        for(int i=0;i<n;i++)
        {
            if(in[i][1]<ne[0])
            {
                v.push_back(in[i]);
            }
             else if(in[i][0]>ne[1])
            {
                if(f==0)
                { a.push_back(st);
        a.push_back(l);
        v.push_back(a);
        f=1;
                }
                 v.push_back(in[i]);
            }
            else
            {
                st=min(in[i][0],st);
                l=max(in[i][1],l);
            }
         
        }
        if(f==0)
        {
            a.push_back(st);
        a.push_back(l);
        v.push_back(a);
        }
        return v;
      
    }
};