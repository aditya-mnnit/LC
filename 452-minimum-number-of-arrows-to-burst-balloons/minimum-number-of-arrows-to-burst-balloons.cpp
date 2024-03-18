class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        vector<pair<int,int>>v;
        for(int i=0;i<points.size();i++)
        {
            v.push_back(make_pair(points[i][0],points[i][1]));
        }
sort(v.begin(),v.end());
int khali=0;
int comp;
int c=0;
for(int i =0;i<v.size();i++)
{
    if(khali==0)
    {
        c++;
        comp=v[i].second;
        khali=1;
    }
    else
    {

        if(v[i].first>comp)
        {
            khali=0;
            i--;
        }
        else
        {
            comp=min(comp,v[i].second);
        }
    }

}
return c;
        
    }
};