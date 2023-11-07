class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size();
        vector<double>time;
        for(int i=0;i<n;i++)
        time.push_back((dist[i]*1.0/speed[i]));
        sort(time.begin(),time.end());
        int c=1;
        int k=1;
        for(int i=0;i<n;i++)
        {
            if(time[i]<=i)
            return i;

        }
        return n;
    }
};